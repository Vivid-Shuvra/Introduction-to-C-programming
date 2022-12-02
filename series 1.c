#include<stdio.h>
main()
{
int i, sum=0, n;
printf("Enter the value of \n n=");
scanf("%d", &n);
for(i=1;i<=n;i++)
sum=sum+i*(i+1);
printf("\n The result is:%d,\n", sum);
return 0;
}
