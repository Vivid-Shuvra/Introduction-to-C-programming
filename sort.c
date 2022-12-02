#include<stdio.h>

int sorting(int arr[], int n)
{
    int i, j, t;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
        return arr;
}
int main()
{
    int arr[100], i, n;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sorting(arr,n);

    printf("The sorted order is : ");
    for(i=0; i<n; i++)
        printf("%d  ", arr[i]);

    return 0;
}
