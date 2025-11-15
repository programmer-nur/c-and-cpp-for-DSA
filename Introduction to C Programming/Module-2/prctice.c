#include<stdio.h>

// int main(){
//     int user_input;
//     scanf("%d", &user_input);

//     if(user_input % 2 ==0){
//         printf("Even Number");
//     }else{
//          printf("Odd Number");
//     }
// }


int main(){
    int user_input;
    scanf("%d", &user_input);

    if(user_input < 0){
        printf("Negative Number");
    }else if (user_input == 0) {
        printf("Special Number");
    }
     else{
         printf("Positive Number");
    }
}