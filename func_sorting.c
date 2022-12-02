#include<stdio.h>

int main()
{
      void sorting (int a[], int n);
      int n=5, i;
      int a[5];

      printf("Enter your series:\n");
    for(i=0; i<5; i++)
        scanf("%d", & a[i]);
    sorting(a, n);

    return 0;

}

    void sorting(int a[], int n)
    {
        int i, j, t;
        for (i=0; i<n; i++){
            for (j=i+i; j<n; j++){
        if(a[i]> a[j]){
                t=a[i];
            a[i]=a[j];
            a[j]= t;
                }
            }
        }
        printf("\nThe correct order is=");
        for (i=0; i<n; i++)
            printf("\n%d", a[i]);

    }
