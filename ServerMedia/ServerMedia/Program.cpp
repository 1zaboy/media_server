#include "Server.h"
#include "Client.cpp"

void da()
{
	
}
int main()
{

	Server server;

	server.port = 3487;//порт это ushort - так что cin.get() и т.п. функции тут работаю некорректно. Лучше задать фвручную
	server.startServer();
	return 0;
	
}
