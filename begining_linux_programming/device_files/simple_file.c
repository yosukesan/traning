
#include <unistd.h>
#include <stdlib.h>

int main()
{
    if (write(1, "Here is some data\n", 18) != 18)
        write(2, "A write rror has occured on file descriptor", 46);

    return 0;
}
