#pragma once
#include "includes.h"

class Client
{
public:
	
	

	Client(SOCKET s, SOCKADDR_IN sock_in);
	~Client();
	void handle();
	void stop();
private:
	SOCKET c_sock;
	SOCKADDR_IN c_addr;
	char buffer[1024];
	//
	// user
	//
	std::thread th_listen;

	//thread th_send;
};