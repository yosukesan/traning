
active proctype judge()
{
    int x = 2;
    int a;

    if 
    :: (x>0)->a=1 
    :: (x==0)->a=2
    fi

    printf("%d\n", a);
}
