#include<stdio.h>


int main (){
    int tk;

    scanf("%d", &tk);

    if(tk >= 5000){
        printf("Cox-bazer jabo\n");
        if(tk >=10000){
             printf("Sentmartin jabo\n");
        }else{
            printf("Ferot chole asbo\n");
        }
    }else{
        printf("Kutho jabo na");
    }
}