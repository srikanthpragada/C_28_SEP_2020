// Take 5 numbers and display total and avg

void main()
{
 int i,n,total = 0;

 for(i=1; i<= 5; i ++)
 {
     printf("Enter a number :");
     scanf("%d",&n);
     total += n;
 }

 printf("Total = %d, Average = %d", total, total / 5);
}
