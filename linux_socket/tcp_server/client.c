
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <memory.h>
#include <unistd.h>

int main()
{
	struct sockaddr_in server;
	int sock;
	char buf[32];
	int n;

	// create socket
	sock = socket(AF_INET, SOCK_STREAM, 0);

	// set up
	server.sin_family = AF_INET;
	server.sin_port = htons(12345);
	server.sin_addr.s_addr = inet_addr("127.0.0.1");
	
	// connect to the server
	connect(sock, (struct sockaddr *)&server, sizeof(server));

	// recv from the server
	memset(buf, 0, sizeof(buf));
	n = read(sock, buf, sizeof(buf));

	printf("%d, %s\n", n, buf);

	// end sock
	close(sock);


	return 0;
}
