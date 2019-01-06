
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

// Reference
// http://www.geekpage.jp/programming/linux-network/socket.php (accessed 2019/01/06)

int main()
{
	int sock;
	const int protocol = 6; /* tcp */
	//const int protocol = 17; /* ipv6 */

	/* create connection point:
	 *-------------------------------------
	 * AF_INET: ipv4 addr
	 * SOCK_STREAM: two way connec by byte stream. out size transport mechanism is supported
	 * protocal: see man 5 protocals or /etc/protocals
	 */	
	sock = socket(AF_INET, SOCK_STREAM, protocol);
	if (sock < 0)
	{
		printf("socket failed. Err sock returned %d\n", sock);
	}
	return (sock < 0) ? 1 : 0;
}


