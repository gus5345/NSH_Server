﻿  






// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.
   
#pragma once

#include "Text_common.h"

     
namespace SocialC2S
{
	class Stub : public ::Proud::IRmiStub
	{
	public:
               
		virtual bool RequestLogon ( ::Proud::HostID, ::Proud::RmiContext& ,  const String & ,  const bool & )		{ 
			return false;
		} 

#define DECRMI_SocialC2S_RequestLogon bool RequestLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const String & villeName,  const bool & isNewVille)
#define DEFRMI_SocialC2S_RequestLogon(DerivedClass) bool DerivedClass::RequestLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const String & villeName,  const bool & isNewVille)
#define CALL_SocialC2S_RequestLogon RequestLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const String & villeName,  const bool & isNewVille)
 
		virtual bool ProcessReceivedMessage(::Proud::CReceivedMessage &pa, void* hostTag) PN_OVERRIDE;
		static const TCHAR* RmiName_RequestLogon;
		static const TCHAR* RmiName_First;
		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; }
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};
}

     
namespace SocialS2C
{
	class Stub : public ::Proud::IRmiStub
	{
	public:
               
		virtual bool ReplyLogon ( ::Proud::HostID, ::Proud::RmiContext& ,  const int & ,  const String & )		{ 
			return false;
		} 

#define DECRMI_SocialS2C_ReplyLogon bool ReplyLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & result,  const String & comment)
#define DEFRMI_SocialS2C_ReplyLogon(DerivedClass) bool DerivedClass::ReplyLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & result,  const String & comment)
#define CALL_SocialS2C_ReplyLogon ReplyLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & result,  const String & comment)
 
		virtual bool ProcessReceivedMessage(::Proud::CReceivedMessage &pa, void* hostTag) PN_OVERRIDE;
		static const TCHAR* RmiName_ReplyLogon;
		static const TCHAR* RmiName_First;
		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; }
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};
}
