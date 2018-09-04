#pragma once
#pragma comment(lib, "ws2_32.lib")
#include "thread"
#include <WinSock2.h>
#include <winsock.h>

class Client
{
public:
	Client(SOCKET s, SOCKADDR_IN sock_in);
	~Client();
	void RECV_Client();
	std::thread read_user;
private:
	SOCKET c_sock;
	SOCKADDR_IN c_addr;
	char buffer[1024];
};

