int sqr (int x)
{
    return x*x;
}
void getnum()
{
    int num;
    char again;
    scanf("%d",&num);
    printf("%d squared is %d\n",num,sqr(num));
    printf("Square another number ? Y or N\n");
    scanf("%s",&again);
    if(again=='y')
    {
        getnum();
    }
    else
    {
        return;
    }
}
