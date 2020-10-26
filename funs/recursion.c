
void main()
{
   print2(10);
}

// Non-recursive
void print(int n)
{
     for( ; n > 0 ; n --)
        printf("%d ",n);
}

// Recursion
void print2(int n)
{
   if(n > 0)
   {
      printf("%d ",n);
      print2(n - 1);  //  Call itself
   }
}
