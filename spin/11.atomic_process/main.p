
int a, b;
int c = 3; 

active proctype judge()
{
    atomic
    {
        a= 0;
        b= 0;
        c= a;
        c = 1;
    }
    printf("%d %d %d\n", a, b, c);

}
