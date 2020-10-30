// Take names from user and write them into file

# include <stdio.h>
# define  FILENAME  "names.txt"

void main()
{
  FILE * fp;
  char name[50];


     fp = fopen(FILENAME,"at");
     if (fp == NULL)
     {
         printf("Sorry! Could not open file!");
         exit(1); // stop program
     }

     while(1)
     {
         printf("Enter name [end to stop] :");
         gets(name);
         if (strcmp(name,"end") == 0)
             break;

         fprintf(fp,"%s\n",name);
     }

     fclose(fp);
}
