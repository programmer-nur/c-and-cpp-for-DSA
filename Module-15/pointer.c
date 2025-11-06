#include <stdio.h>

int main() {
    int x= 110;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x;
    *ptr = 200;

    printf("%p\n", ptr);  
    printf("%d", x);
    

    return 0;
}