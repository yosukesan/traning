
active proctype judge()
{
    int x=-4;
    int a=0;
    do
    :: (x>0)->a++
    :: (x==0)->break
    od

    printf("%d\n", a);
}
