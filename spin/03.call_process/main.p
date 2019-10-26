
proctype proc1()
{
    printf("proc\n");
}

init
{
    run proc1();
}
