// Server.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Server.h"
#include "..\Common\Common.h"

Server::Server()
{
	m_netServer = CNetServer::Create();
	m_netServer->SetEventSink(this);
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