// Take filename from user and display no. of chars, words, and lines

# include <stdio.h>

void main()
{
  FILE * fp;
  int ch, lines = 0, words = 0, chars = 0;
  char filename[50];

     printf("Enter filename: ");
     gets(filename);

     fp = fopen(filename,"rt");
     if (fp == NULL)
     {
         printf("Sorry! Could not open file!");
         exit(1); // stop program
     }

     while(1)
     {
         ch = fgetc(fp); // read ch from file
         if (ch == EOF)
             break;

         chars ++;

         if(ch == 32)
            words ++;

         if(ch == '\n') {
             lines ++;
             words ++;
         }
     }

     fclose(fp);
     printf("No. of chars = %5d\n",chars);
     printf("No. of words = %5d\n",words);
     printf("No. of lines = %5d\n",lines);
}
