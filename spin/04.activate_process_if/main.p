
int num = 0;

active proctype proc1()
{
    num++->printf("%d\n", num);
}

active proctype proc2()
provided(num>3)
{
    printf("hello world\n");
}
