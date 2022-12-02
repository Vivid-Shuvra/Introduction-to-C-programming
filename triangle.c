#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s, area;
printf("Enter the length of three arms:\n");
scanf("%f%f%f", &a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n The area of the triangle is\n %.2f ", area);
getch();
}
