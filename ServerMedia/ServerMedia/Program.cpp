#include "Server.h"
#include "Client.cpp"

void da()
{
	
}
int main()
{

	Server server;

	server.port = 3487;//���� ��� ushort - ��� ��� cin.get() � �.�. ������� ��� ������� �����������. ����� ������ ��������
	server.startServer();
	return 0;
	
}
