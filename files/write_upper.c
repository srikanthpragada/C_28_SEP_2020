# include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     fp = fopen("chars.txt","wt");

     for(ch=65; ch <= 90; ch ++)
         fputc(ch,fp);

     fclose(fp);
}
