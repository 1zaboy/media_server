#pragma once
#pragma comment(lib, "ws2_32.lib")
#include "thread"
#include <WinSock2.h>
#include <winsock.h>
#include <list>
#include "Client.h"
using namespace std;
class server
{	
public:
	server(int Port);
	~server();	
	void StartServer();
	void StopServer() const;
	void AddThreadClient();
	unsigned short port;
	thread* ggg;
	list<Client*> List_Client;
	SOCKET this_s;
	WSAData wData;
	
};

