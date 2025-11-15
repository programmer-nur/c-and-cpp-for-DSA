#include<stdio.h>
#include<stdbool.h>


int main(){
    int a = 15 ,b = 15;

    if(a == b){
        printf("Equal" );
    }
    if(a != b){
       printf("Not Equal");
    }
    if(a > b){
       printf("Greater Than");
    }
    if(a < b){
       printf("Less Than");
    }
    if(a >= b){
       printf("Greater Than or Equal To");
    }
    if(a <= b){
       printf("Less Than or Equal To");
    }

    return 0;

}