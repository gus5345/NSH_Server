#include "stdafx.h"
#include "Server.h"

int _tmain(int argc, _TCHAR* argv[])
{
	puts("���� ����");
	puts("ESC: Quit");

	Server * server = new Server;
	server->Start();
	while (true)
	{
		if (_kbhit())
		{
			int ch = _getch();
			if (ch == 27) //ESC
			{
				break;
			}
		}
		Sleep(100);
	}
	delete server;
	return 0;
}