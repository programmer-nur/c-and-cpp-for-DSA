#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int first = a%10;
    printf("%d \n", first);
    if(first % 2 ==0 ){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
        
    return 0;
}