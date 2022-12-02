#include<stdio.h>
void main(){

   char a;
   printf("Enter the character:");
   scanf("%c",&a);
   if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
   printf("Answer is alphabate");
   else
   printf("Not alphabate");

}
