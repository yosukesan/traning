
int a, b;
int c= 3;

active proctype judge()
{
    a = 0;
    printf("%d %d %d\n", a, b, c);
    b = 0;
    printf("%d %d %d\n", a, b, c);
    c = a; /*spin judges valid here since a=b=c=0*/
    printf("%d %d %d\n", a, b, c);
    c = 1;
    printf("%d %d %d\n", a, b, c);
}
