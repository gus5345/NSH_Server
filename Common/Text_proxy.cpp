﻿




// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.

#include "Text_proxy.h"

namespace SocialC2S
{
        
	bool Proxy::RequestLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const String & villeName,  const bool & isNewVille)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_RequestLogon;
__msg.Write(__msgid); 
	
__msg << villeName;
__msg << isNewVille;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_RequestLogon, (::Proud::RmiID)Rmi_RequestLogon);
	}

	bool Proxy::RequestLogon ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const String & villeName,  const bool & isNewVille)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_RequestLogon;
__msg.Write(__msgid); 
	
__msg << villeName;
__msg << isNewVille;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_RequestLogon, (::Proud::RmiID)Rmi_RequestLogon);
	}
#ifndef HIDE_RMI_NAME_STRING
const TCHAR* Proxy::RmiName_RequestLogon =_PNT("RequestLogon");
#else
const TCHAR* Proxy::RmiName_RequestLogon =_PNT("");
#endif
const TCHAR* Proxy::RmiName_First = RmiName_RequestLogon;
}
namespace SocialS2C
{
        
	bool Proxy::ReplyLogon ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ,  const int & result,  const String & comment)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_ReplyLogon;
__msg.Write(__msgid); 
	
__msg << result;
__msg << comment;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_ReplyLogon, (::Proud::RmiID)Rmi_ReplyLogon);
	}

	bool Proxy::ReplyLogon ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext,  const int & result,  const String & comment)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_ReplyLogon;
__msg.Write(__msgid); 
	
__msg << result;
__msg << comment;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_ReplyLogon, (::Proud::RmiID)Rmi_ReplyLogon);
	}
#ifndef HIDE_RMI_NAME_STRING
const TCHAR* Proxy::RmiName_ReplyLogon =_PNT("ReplyLogon");
#else
const TCHAR* Proxy::RmiName_ReplyLogon =_PNT("");
#endif
const TCHAR* Proxy::RmiName_First = RmiName_ReplyLogon;
}

