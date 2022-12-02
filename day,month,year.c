#include<stdio.h>
main()
{
  int x,y,m,d,n;
  printf("Enter your n=\n");
  scanf("%d",&n);
  y=n/365;
  printf("\nYear is=%d", y);
  x=n%365;
  m=x/30;
  printf("\nMonth is=%d", m);
  d=x%30;
  printf("\nDay is=%d",d);

}
