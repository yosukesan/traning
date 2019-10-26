
/*
 * This is not a function macros
 */
inline show_hello(x)
{
    printf("%d\n", x);
}

active proctype hello ()
{
    show_hello(2);
}
