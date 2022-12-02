#include<stdio.h>
int main()
{
   int i,j,n,flag;
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
   flag=0;
   for(j=2;j<=i/2;j++)
   if(i%j==0)
   {
    flag=1;
    break;
   }
   }
   if(flag==0)
   {
   printf("%d is prime number", n);
   }
   else
    printf("%d is non-prime number", n);
}
