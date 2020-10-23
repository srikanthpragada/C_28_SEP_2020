int square(int n)
{
   return n * n;
}

int factorial(int n)
{
  int fact = 1, i;

      for(i=2; i <= n; i ++)
          fact *= i;

      return fact;
}

void main()
{
  int res;

      res = factorial(5);
      printf("%d",res);

}

