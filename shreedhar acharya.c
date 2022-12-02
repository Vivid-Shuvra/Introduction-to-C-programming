#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c,d,root1,root2;
   printf("Enter the float value a = ") ;
   scanf("%f", &a);
   printf("\nEnter the float value b = ") ;
   scanf("%f", &b);
   printf("\nEnter the float value c = ") ;
   scanf("%f", &c);
   d=((b*b)-(4*a*c));
   if(d>=0)
    {
    root1=(-(b+sqrt(d))/(2*a));
    root2=(-(b-sqrt(d))/(2*a));
    printf("\n\nThe root value is=%.3f, %.3f \n",root1,root2 );
   }
   else
   printf("\n\nYou did wrong \n");
   printf("End of the program");

}
