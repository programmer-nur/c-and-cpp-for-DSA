#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int sum = a + b;
    long long int multiply = (long long int)a * b;
    int sub = a - b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d * %d = %lld\n",a,b,multiply);
    printf("%d - %d = %d\n",a,b,sub);
    return 0;
}