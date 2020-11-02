// Take marks from user and display only those marks that are greater than average
#include <stdio.h>

struct node
{
    int marks;
    struct node * next;
};

main()
{
  struct node *root = NULL, *cur, *prev;
  int marks, sum=0, count=0, avg;

  while(1)
  {
      printf("Enter marks [0 to stop] :");
      scanf("%d",&marks);

      if (marks == 0)
         break;

      // create new node
      cur = (struct node *) malloc(sizeof(struct node));
      if(cur == NULL)
      {
          printf("Memory Error!");
          exit(1);
      }

      cur->marks = marks;
      cur->next = NULL;
      sum += marks;
      count ++;

      if(root == NULL)
         root = cur;
      else
         prev->next = cur;

      prev = cur;
  }

  avg = sum / count;
  // print marks greater than average
  cur = root;
  while (cur != NULL)
  {
     if(cur-> marks > avg)
         printf("%d ", cur->marks);

     cur = cur->next;
  }

} // main()
