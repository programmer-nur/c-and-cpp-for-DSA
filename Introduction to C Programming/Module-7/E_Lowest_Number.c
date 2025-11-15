#include<stdio.h>

int main(){
    int n,lowest,position=1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }

    lowest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(lowest > arr[i]){
            lowest = arr[i];
            position = i +1;
        }
    }

    printf("%d %d",lowest,position);
    
    return 0;
}