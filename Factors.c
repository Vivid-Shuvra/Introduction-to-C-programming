// To find Factors of a number:
#include<stdio.h>
main()
{
int i, n;
printf("Enter a value:");
scanf("%d", &n);
printf("\n The Factors are:");
for(i=1;i<=n;i++)
 {
 if(n%i==0)
printf("\n%d", i);
}
}
