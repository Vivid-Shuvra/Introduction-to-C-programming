#include<stdio.h>
main()
{
float a,b,c,d,e,sum;
int f;
printf("enter the value of a:");
scanf("%f",&a);
printf("enter the value of b:");
scanf("%f",&b);
printf("enter the value of c:");
scanf("%f",&c);
printf("enter the value of d:");
scanf("%f",&d);
if(a<=b &&a<=c &&a<=d)
sum=(b+c+d)/3;
else if (b<=a&&b<=c&&b<=d)
sum=(a+c+d)/3;
else if (c<=a&&c<=b&&c<=d)
sum=(a+b+d)/3;
else
sum=(a+b+c)/3;
f=sum;
e=sum-f;
if(e<.1)
    sum=f;
else
    sum=f+1;
printf(" the sum is %f",sum);
}
