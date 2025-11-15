#include<stdio.h>


int main(){
    int num1,num2;

    scanf("%d %d", &num1, &num2);

    printf("2nd Number is %d\n1st Number is %d", num2, num1);
    return 0;
}


//1. When we need big integer like more than 10^9 that time we need long long int data type instead of integer.
//2. myName, name, my_name, my2name