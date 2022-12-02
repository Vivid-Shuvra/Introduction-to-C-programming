#include<stdio.h>

int largest(int num[], int n)
{
    int i;
    for(i=0; i<n; i++){
        if(num[0] < num[i]){
            num[0] = num[i];
        }
    }
    return num[0];
}

int main()
{
    int ax[100];
    int i, n, res;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter %d numbers here : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &ax[i]);
    res = largest(ax, n);
    printf("The largest number is : %d", res);
    return 0;
}

