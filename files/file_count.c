// Take filename from command-line and display no. of chars, words, and lines

# include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  int ch, lines = 0, words = 0, chars = 0;

     if(argc < 2)
     {
         printf("Sorry! Filename is missing! Please provide filename on command-line!");
         exit(0);
     }

     fp = fopen(argv[1],"rt");
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
