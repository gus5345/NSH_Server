#pragma once

namespace SocialC2S
{
	//Message ID that replies to each RMI method. 
               
    static const ::Proud::RmiID Rmi_RequestLogon = (::Proud::RmiID)(3000+1);

	// List that has RMI ID.
	extern ::Proud::RmiID g_RmiIDList[];
	// RmiID List Count
	extern int g_RmiIDListCount;
}

namespace SocialS2C
{
	//Message ID that replies to each RMI method. 
               
    static const ::Proud::RmiID Rmi_ReplyLogon = (::Proud::RmiID)(4000+1);

	// List that has RMI ID.
	extern ::Proud::RmiID g_RmiIDList[];
	// RmiID List Count
	extern int g_RmiIDListCount;
}

 
