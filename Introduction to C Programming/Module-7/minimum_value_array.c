#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int minimum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        minimum = arr[0];
    }

    for (int i = 1; i < n; i++)
    {
       if(arr[i] < minimum){
            minimum = arr[i];
       }
    }
    

    printf("%d", minimum);    
    return 0;
}