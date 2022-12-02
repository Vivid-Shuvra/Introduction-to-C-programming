#include<stdio.h>
#include<conio.h>

    int main()
    {
         FILE* fp;
         char ch;

         fp = fopen("file1.txt","w");

         printf("\n A data file is open for you.\n Write something\n Press CTRL+Z at end\n\n\n");

          while ((ch = getchar()) != EOF)
          {
              putc(ch, fp);
          }
          fclose(fp);

          fp = fopen("file1.txt", "r");

          printf("\n The file1.txt file contains:\n\n");

           while ((ch = getc(fp)) != EOF)
          {
              printf("%c", ch);
          }
          fclose(fp);
          getch();

        return 0;
    }
