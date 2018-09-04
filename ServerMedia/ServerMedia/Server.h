#pragma once
#include "includes.h"
#include <list>

class Server
{
public:
	Server();
	~Server();
	void startServer();
	void closeServer();
	void handle();
	unsigned short port;
private:
	SOCKET this_s;
	WSAData wData;
	//
	// user
	//
	std::list<Client*> list_Client;
};
