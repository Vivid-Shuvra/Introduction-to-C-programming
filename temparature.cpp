#include<stdio.h>
main()
{
float celcius,farenheit;
printf("Enter the temperature in farenheit:");
scanf("%f",&farenheit);
celcius=((farenheit-32)/9)*5;
printf("Temparature in celcius is:%f",celcius);
}
