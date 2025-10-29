#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maximum =0;

    for (int i = 0; i < n; i++)
    {
       if(maximum < arr[i]){
        maximum = arr[i];
       }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] =  maximum- arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}