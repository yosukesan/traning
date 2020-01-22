
DBUS_VERSION=dbus-1.0
ARCH=x86_64-linux-gnu

CC=gcc
CFLAGS=-W -Wall -O0 -g -I /usr/include/$(DBUS_VERSION) -I /usr/lib/$(ARCH)/$(DBUS_VERSION)/include/

all:
	$(CC) $(CFLAGS) main.c  /usr/lib/$(ARCH)/libdbus-1.so

