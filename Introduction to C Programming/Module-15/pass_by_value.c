#include <stdio.h>


void fun(int x){
    x = 20;
    printf("Fun func er x er address%p\n", &x);

}
int main() {
    int x =10;
    fun(x);

    // printf("%d", x);   
    printf("Main func er x er address%p", &x);

    return 0;
}