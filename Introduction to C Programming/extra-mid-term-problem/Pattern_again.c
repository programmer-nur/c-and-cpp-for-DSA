#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i =1;

    int arr[n];
   for (int i = 0; i < n; i++)
   {
    int temp = i *10;
    arr[i] = temp + i;
   }
   
    
    for (int i = 0; i < n; i++)
    {
    printf("%d\n", arr[i]);
    }
    return 0;
}