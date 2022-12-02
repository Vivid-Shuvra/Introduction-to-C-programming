#include<stdio.h>

int main()
{
      int smallest (int a[], int n);
      int n=5, i;
      int a[5];
      printf(" Enter the values:\n");
    for(i=0; i<5; i++)
        scanf("%d", & a[i]);
    smallest(a, n);
}

    int smallest(int a[], int n)
    {
        int i;
        for (i=0; i<5; i++){
        if(a[0]> a[i])
            a[0]=a[i];
        }
        printf("\nThe smallest one is=%d", a[0]);
    }
