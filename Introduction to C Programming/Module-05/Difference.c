#include<stdio.h>

int main(){
    int a,b,c,d,res;
    long long int one,two;
    scanf("%d %d %d %d", &a,&b,&c,&d);


    if(a < 0 && b < 0){
        one = -(long long int)a*b;
    }else{
        one = (long long int)a*b;
    }
    
    if(c < 0 && d < 0){
        two = -(long long int)c*d;
    }else{
        two = (long long int)c*d;
    }

    printf("%lld %lld\n", one,two);

    if(one < 0 && two < 0){
       if(one > two){
            res = (one) - (two);
            printf("%d block",res);
       }
    }else{
        res = one - two;
        printf("%d none block",res);
    }
    return 0;
}