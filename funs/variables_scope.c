int g = 100; // global

void main()
{
    fun();
    fun();
}


void fun()
{
   int b = 10;  // local

      printf("%d ",b);
      b ++;
}
