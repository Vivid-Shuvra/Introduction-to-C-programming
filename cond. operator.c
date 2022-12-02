#include<stdio.h>
main()
{
int a,b,x;
printf("Enter the value: \n");
scanf("%d%d",&a,&b);
x=((a<b)?a:b);
printf("The result is %d \n", x);
}
