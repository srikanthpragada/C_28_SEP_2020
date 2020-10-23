int sum(int a[10])
{
  int total = 0, i;

     for(i=0; i < 10; i ++)
        total += a[i];

     return total;
}

// Returns position of number, otherwise -1
int search(int a[10], int n)
{
  int i;

     for(i = 0; i < 10; i ++)
     {
        if (a[i] == n)
           return i;
     }

     return -1;
}

int count_upper(char s[30])
{
  int i,count = 0;

    for(i=0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
           count++;
    }

    return count;
}


void print(int a[10])
{
 int i;

    for(i=0; i < 10; i ++)
        printf("%5d", a[i]);
}

void print_vert(char s[20])
{
    int i;

    for(i=0; s[i] != '\0'; i ++)
        printf("%c\n", s[i]);
}

void main()
{
 int a[10] = {1,2,3,4,5,6,7,8,9,10};
 int b[10] = {11,12,12,3,44,55,66,5,56,66};

     print(a);
     printf("\n");
     print_vert("Hello!");
     printf("\nTotal = %d", sum(a));

}

