#include <stdio.h>

struct student
{
  int admno, course;
  char name[30];
};

void main()
{
 struct student s1;

    printf("Enter admno :");
    scanf("%d",&s1.admno);

    fflush(stdin); // clear keyboard buffer

    printf("Enter name :");
    gets(s1.name);

    printf("Enter course [1-Java, 2-Python] :");
    scanf("%d",&s1.course);

    printf("%d %s %d", s1.admno, s1.name, s1.course);

}

