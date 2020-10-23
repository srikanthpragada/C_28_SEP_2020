void line(int length,char ch)
{
 int i;

    for(i=1; i <= length; i ++)
        putch(ch);
}

void main()
{
    line(20,'*');
    printf("\n");
    line(30,'=');
}

