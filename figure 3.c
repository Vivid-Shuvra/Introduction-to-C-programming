#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d", &n);
for(i=1;i<=n;i++)
{
for(j=2;j<=i;j++)
{
printf("* ");// use i or j in case of k++;
}
printf("\n");
}
}
