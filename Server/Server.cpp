// Server.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Server.h"
#include "..\Common\Common.h"

Server::Server()
{
	m_netServer = CNetServer::Create();
	m_netServer->SetEventSink(this);
	m_netServer->AttachProxy(&m_S2CProxy);
	m_netServer->AttachStub(this);
}
Server::~Server()
{
	delete m_netServer;
}
void Server::Start()
{
	ErrorInfoPtr err;
	CStartServerParameter sp;
	sp.m_protocolVersion = g_NSHProtocoIVersion;
	sp.m_tcpPorts.Add(5345);
	m_netServer->Start(sp, err);
}
void Server::OnClientJoin(CNetClientInfo *clientInfo)
{
	printf("%s: %d\n", clientInfo->m_HostID);
}
void Server::OnClientLeave(CNetClientInfo *clientInfo, ErrorInfo *errorInfo, const ByteArray& comment)
{
	printf("%s: %d\n", clientInfo->m_HostID);
}
DEFRMI_SocialC2S_RequestLogon(Server)
{
	m_S2CProxy.ReplyLogon(remote, RmiContext::ReliableSend, 0, L"");
	return true;
}