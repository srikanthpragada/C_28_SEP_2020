// Take names from file and display them

# include <stdio.h>
# define  FILENAME  "names.txt"

void main()
{
  FILE * fp;
  char name[50], *p;


     fp = fopen(FILENAME,"rt");
     if (fp == NULL)
     {
         printf("Sorry! Could not open file!");
         exit(1); // stop program
     }

     while(1)
     {
         p = fgets(name,30,fp);  // Returns NULL on EOF
         if(p == NULL)
            break;

         printf("%s",name);
     }

     fclose(fp);
}
