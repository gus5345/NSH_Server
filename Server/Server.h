#pragma once
class Server : public INetServerEvent
{
public:
	Server();
	~Server();
	CNetServer * m_netServer;
	void Start();
	virtual void OnClientJoin(CNetClientInfo *clientInfo);
	virtual void OnClientLeave(CNetClientInfo *clientInfo, ErrorInfo *errorInfo, const ByteArray& comment);
	virtual bool OnConnectionRequest(AddrPort clientAddr, ByteArray &userDataFromClient, ByteArray &reply) override	{return true;}
	virtual void OnP2PGroupJoinMemberAckComplete(HostID groupHostID, HostID memberHostID, ErrorType result) override {}
	virtual void OnUserWorkerThreadBegin() override {}
	virtual void OnUserWorkerThreadEnd() override {}

	virtual void OnError(ErrorInfo *errorInfo) override{ printf("OnError : %s\n", StringT2A(errorInfo->ToString()).GetString()); }
	virtual void OnWarning(ErrorInfo *errorInfo) override{ printf("OnWarning : %s\n", StringT2A(errorInfo->ToString()).GetString()); }
	virtual void OnInformation(ErrorInfo *errorInfo) override{ printf("OnInformation : %s\n", StringT2A(errorInfo->ToString()).GetString()); }
	virtual void OnException(Exception &e) override{ printf("OnInformation : %s\n", e.what()); }
	virtual void OnNoRmiProcessed(Proud::RmiID rmiID) override {}
};