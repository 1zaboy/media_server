#include "pch.h"
#include "Client.h"
#include <cstdio>

void Client::RECV_Client()
{
	while (true)
	{
		int k = recv(c_sock, buffer, sizeof(buffer), NULL);
		if (k > 0) {
			printf(buffer);
		}
		Sleep(30);
	}
}

Client::Client(SOCKET s, SOCKADDR_IN sock_in)
{
	c_sock = s;
	c_addr = sock_in;
	printf("Client created\n");
	read_user = std::thread(&Client::RECV_Client, this);
}


Client::~Client()
{
}
