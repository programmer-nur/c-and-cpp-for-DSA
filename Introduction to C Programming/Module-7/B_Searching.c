#include<stdio.h>

int main(){
    int n,x,check=-1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
       if(x == arr[i]){
            check = i;
            break;
       }
    }
    
    printf("%d", check);

    return 0;
}