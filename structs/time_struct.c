#include <stdio.h>

struct time
{
  int h,m,s;
};

int total_seconds(struct time t)
{
    return   t.h * 3600 + t.m  * 60 + t.s;
}

void main()
{
 struct time t1;

    printf("Enter time [hh:mm:ss] :");
    scanf("%d:%d:%d",&t1.h,&t1.m,&t1.s);

    printf("Time = %02d:%02d:%02d", t1.h, t1.m, t1.s);

    printf("\nTotal Seconds = %d", total_seconds(t1));

}

