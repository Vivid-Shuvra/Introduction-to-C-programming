#include<stdio.h>
int main()
{
    int ax[6];
    int i,sum=0;
    for(i=0;i<6;i++)
    scanf("%d", &ax[i]);

    for(i=0;i<6;i++)
    if(ax[i]<=50)
    ax[i]+=5;
    else
    ax[i]+=10;

    for(i=0;i<6;i++)
    sum=sum+ax[i];

    for(i=0;i<6;i++)
    printf("\nax(%d)=%d",i, ax[i]);
    printf("\n\n sum=%d", sum);
}
