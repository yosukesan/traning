
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <errno.h>

// http://www.geekpage.jp/programming/linux-network/perror.php (accessed 2019/01/06)

int main()
{
	int sock = socket(300, 400, 500);
	if (sock < 0)
	{
		perror("socket");
		fprintf(stderr, "%d\n", errno);	
	}
	return (sock < 0) ? 1 : 0;
}
