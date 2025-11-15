#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
       if(arr[i] > maximum){
            maximum = arr[i];
       }
    }

    printf("%d", maximum);    
    return 0;
}