#include<stdio.h>
main()
{
int a,b,n,result=0;
printf("Enter the value:");
scanf("%d", &n);
a=0;
b=1;
printf("The Fibonacci series is: ");
while(result<=n)
{
    printf("%d+", result);
a=b;
b=result;
result=a+b;
}
printf("................");
}
