// To find Factorial of a number:
#include<stdio.h>
main()
{
int i, n,f=1;
printf("Enter a value:");
scanf("%d", &n);
printf("\nFactorial is:\n");
for(i=1;i<=n;i++)
f=f*i;
printf("%d", f);
}
