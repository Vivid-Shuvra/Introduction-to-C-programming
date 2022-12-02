# include<stdio.h>
 int main()
 {
      int sort(int arr[5]);
       int i, s;
       int arr[5] = {5, 1, 3, 7, 10};
       printf("Sorted series is:\n\n");
       s = sort(arr);
        for(i = 0; i < 5; i++)
            printf("%d\t", arr[i]);

}

    int sort(int arr [5]){
            int i, j, t;
            for(i = 0; i < 5; i++){
                for(j = i+1; j < 5; j++){
                if(arr[i] < arr[j]){
                t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
                }
            }
        }
            return t;
    }
