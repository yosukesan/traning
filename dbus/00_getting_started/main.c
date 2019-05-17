
#include <stdlib.h>
#include <stdio.h>

#include <dbus/dbus.h>

int main() {
    DBusError err;
    DBusConnection* conn;
    int ret;

    // initialise the errors
    dbus_error_init(&err);

    // connect to the bus
    conn = dbus_bus_get(DBUS_BUS_SESSION, &err);
    if (dbus_error_is_set(&err)){
        fprintf(stderr, "connection Error (%s)\n", err.message);
        dbus_error_free(&err);
    }
    if (!conn){
        exit(1);
    }

    // request a name on the bus
    ret = dbus_bus_request_name(conn, "test.method.server",
            DBUS_NAME_FLAG_REPLACE_EXISTING, &err);
    if (dbus_error_is_set(&err)){
        fprintf(stderr, "Name Error (%s)\n", err.message);
        dbus_error_free(&err);
    }
    if (DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER != ret){
        exit(1);
    }

    // process 15624: Applications must not close shared connections
    // - see dbus_connection_close() docs. This is a bug in the application.
    // 
    //dbus_connection_close(conn);

    return 0;
}
