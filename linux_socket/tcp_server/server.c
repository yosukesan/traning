
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <errno.h>
#include <unistd.h>

// http://www.geekpage.jp/programming/linux-network/tcp-1.php (accessed 2019/01/06)

int main()
{
	int sock0;
	int sock;
	struct sockaddr_in addr;
	struct sockaddr_in client;
	socklen_t len;	

	// craete socket
	sock0 = socket(AF_INET, SOCK_STREAM, 0);
	if (sock0 < 0)
	{
		perror("socket");
		fprintf(stderr, "errno = %d\n", errno);
		return 1;
	}
	
	// define socket
	addr.sin_family = AF_INET; // ipv4
	addr.sin_port = htons(12345);
	addr.sin_addr.s_addr = INADDR_ANY;
	bind(sock0, (struct sockaddr *)&addr, sizeof(addr));

	// let the server waiting status
	listen(sock0, 5);	

	// accept the connection from client	
	len = sizeof(client);
	sock = accept(sock0, (struct sockaddr*)&client, &len);
	if (sock < 0)
	{
		perror("socket");
		fprintf(stderr, "errno = %d\n", errno);
		return 2;
	}

	// send 5 letters
	write(sock, "HELLO", 5);

	// end of tcp session
	close(sock);

	// close the listenning socket
	close(sock0);

	return 0;
}
