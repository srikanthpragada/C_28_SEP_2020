
void print_array(int * arr, int len)
{
  int i;
     for(i=0; i < len ; i ++)
        printf("%5d", arr[i]);
}

void main()
{
   int a[10], b[20];
   int i;

       srand(time(0));
       for(i=0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           b[i] = rand() % 50;
       }
       print_array(a,5);
       print_array(b,5);
}
