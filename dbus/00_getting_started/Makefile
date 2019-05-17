
DBUS_VERSION=dbus-1.0
ARCH=x86_64-linux-gnu

CC=clang-3.8
CFLAGS=-W -Wall -O0 -I /usr/include/$(DBUS_VERSION) -I /usr/lib/$(ARCH)/$(DBUS_VERSION)/include/

all:
	$(CC) $(CFLAGS) main.c  /usr/lib/$(ARCH)/libdbus-1.so

