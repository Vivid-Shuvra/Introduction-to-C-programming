#include<stdio.h>

int main()
{
    int fact(int n);

    int n,s;
    scanf("%d", &n);
    s=fact(n);
    printf("%d",s);
}
int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
    return f;
}
