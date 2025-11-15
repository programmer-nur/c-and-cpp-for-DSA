#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;

    printf("%d %d %d %d", sum,difference,product,quotient);
}