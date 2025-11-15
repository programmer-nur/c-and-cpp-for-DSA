#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int palindrome[n];

    for (int i = 0; i < n; i++)
    {
       scanf("%d", arr[i]);
    }

     for (int i = n-1; i >= 0; i++)
    {
       palindrome[i] = i;
    }

    if(arr[n] == palindrome[n]){
        printf("YES");
    }else{
          printf("YES");
    }
    
    return 0;
}