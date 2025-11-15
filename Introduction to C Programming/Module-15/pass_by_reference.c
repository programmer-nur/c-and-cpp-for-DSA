#include <stdio.h>


void fun(int* p){
    *p = 20;
    printf("Fun func er x er address%p\n", p);

}
int main() {
    int x =10;
    fun(&x);

    printf("%d\n", x);   
    printf("Main func er x er address%p", &x);

    return 0;
}