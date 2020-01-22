
#http://www.usupi.org/sysad/175.html

# example
dbus-send --system --dest=org.freedesktop.DBus   --type=method_call --print-reply /org/freedesktop/DBus   org.freedesktop.DBus.Introspectable.Introspect

# list name
dbus-send --system --dest=org.freedesktop.DBus   --type=method_call --print-reply /org/freedesktop/DBus   org.freedesktop.DBus.ListNames
