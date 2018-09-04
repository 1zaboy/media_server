
#include "Client.h"


void Client::handle()
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

	th_listen = thread(&Client::handle, this);
	th_listen.join();	
}
void Client::stop()
{
	th_listen.join();

}



Client::~Client()
{
}

