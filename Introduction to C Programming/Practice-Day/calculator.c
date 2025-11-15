#include<stdio.h>

int main(){
    int a, b,res;
    char worker;

    scanf("%d %d %c", &a, &b, &worker);

    if(worker == '+'){
        res = a + b;
    }else if (worker == '-')
    {
        res = a - b;
    }else if (worker == '*')
    {
        res = a * b;
    }else if (worker == '/')
    {
        res = a / b;
    }
    
    printf("%d",res);
}