# include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

     fp = fopen("chars.txt","rt");

     while(1)
     {
         ch = fgetc(fp); // read ch from file
         if (ch == EOF)
             break;
         printf("%c %d\n",ch,ch);
     }

     fclose(fp);
}
