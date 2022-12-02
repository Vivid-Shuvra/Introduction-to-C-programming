# include<stdio.h>
 int main()
 {
     int ax[2] [2], bx[2] [2], cx[2] [2];
     int i,j;

     {
         for(i=0; i<2; i++)
            {
            for(j=0; j<2; j++)
        scanf("%d", &ax[i][j]);
            }
        }

        {
        for(i=0; i<2; i++)
            {
            for(j=0; j<2; j++)
        scanf("%d", &bx[i][j]);
        }
    }
         {
             for(i=0; i<2; i++)
                {
        for(j=0; j<2; j++){
         cx[i][j] = ax[i][j] + bx[i][j];

         printf("%d\n", cx[i][j]);
                }
            }
         }
    return 0;

 }


