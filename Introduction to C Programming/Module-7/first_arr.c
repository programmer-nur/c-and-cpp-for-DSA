#include<stdio.h>

int main(){
    int arr[5];
   
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d of no %d\n", arr[i],i);
    }
    
    return 0;
}