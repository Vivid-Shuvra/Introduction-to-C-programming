#include<stdio.h>
main()
{
int i,c=0;
for(i=5;i<=15;i=i+1)
{
if(i%3==0)
c=c+1;
}
printf("total number is %d",c);
}
