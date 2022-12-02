#include<stdio.h>
#include<math.h>
main()
{
double a,b,l;
char op;
scanf("%c",&op);
switch(op)
{
case'+':
printf("For addition enter value:\n");
scanf("%lf%lf",&a,&b);
printf("ADD is:%0.02lf+%0.02lf=%0.03lf", a,b,a+b); break;

case'-':
printf("For subtraction enter value:\n");
scanf("%lf%lf",&a,&b);
printf("SUB is:%0.02lf-%0.02lf=%0.03lf", a,b,a-b); break;

case'*':
printf("For multiplication enter value:\n");
scanf("%lf%lf",&a,&b);
printf("MUL is:%0.02lf*%0.02lf=%0.03lf", a,b,a*b); break;

case'/':
printf("For division enter value:\n");
scanf("%lf%lf",&a,&b);
printf("DIV is:%0.02lf/%0.02lf=%0.03lf", a,b,a/b); break;

case'%':
printf("For remainder enter value:\n");
scanf("%lf%lf",&a,&b);
l=fmod(a,b);
printf("REM is:%0.02lf%%0.02lf=%0.03lf", a,b,l); break;

case'$':
printf("For square root enter value:\n");
scanf("%lf",&a);
l=sqrt(a);
printf("ROOT is:Root(%.2lf)=%0.03lf", a,l); break;

case'p':
printf("For power enter value:\n");
scanf("%lf%lf", &a,&b);
l=pow(a,b);
printf("POW is:%0.02lf^%0.02lf=%0.03lf", a,b,l); break;

case 's':
printf("For sine function enter value:\n");
scanf("%lf", &a);
b=(a*3.1416)/180;
l=sin(b);
printf("SIN is:sin(%lf)=%0.03lf", a,l); break;

case 'c':
printf("For  cosine function enter value:\n");
scanf("%lf", &a);
b=(a*3.1416)/180;
l=cos(b);
printf("COS is:cos(%lf)=%0.03lf", a,l); break;

default :
    printf("MATH ERROR!!!!!!");

}
}
