#include<stdio.h>


    int main()
    {
           int i, a, m ,n, j;
           int flag;
            printf("Enter your number:");
            scanf("%d %d", &m, &n);  // scanf("%d", &a);
            printf("prime numbers are:");
        for(j=m; j<=n; j++){
            a=j;
            flag=1;
        if(a==1)
            flag=0;
           for(i=2; i<a; i++){
            if(a%i==0)
            flag=0;
           }

           if(flag==1)
            printf("%d ", a);
           //else
            //printf("Non-prime");
        }

        return 0;

    }
