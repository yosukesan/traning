

#include <stdio.h>
#include <stdlib.h>
#include <dbus/dbus.h>

int main(){
    
    dbus_uint32_t serial = 0;    
    DBusMessage* msg;
    DBusMessageIter args;

    DBusError err;
    DBusConnection* conn;

    const char sigvalue[] = "hello_world";

    // create connection
    conn = dbus_bus_get(DBUS_BUS_SESSION, &err);

    // create a signal and check for errors
    msg = dbus_message_new_signal("/test/signal/Object", // object name of signal
                "test.signal.type", // interface name of the  signal
                "Test"); // name of signal

    if (!msg){
        fprintf(stderr, "Message Null\n");
        exit(1);
    }

    // append argument onto signal
    dbus_message_iter_init_append(msg, &args);
    if (!dbus_message_iter_append_basic(&args, DBUS_TYPE_STRING, &sigvalue)){
        fprintf(stderr, "Out of memory\n");
        exit(1);
    }

    // send the message and flush the conection
    if (!dbus_connection_send(conn, msg, &serial)){
        fprintf(stderr, "Out of memory\n");
        exit(1);
    }    

    dbus_connection_flush(conn);

    // free the message
    dbus_message_unref(msg);
    
    return 0;
}
