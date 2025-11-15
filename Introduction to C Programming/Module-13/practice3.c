#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star = n;
    int space =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {
           printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
           printf("*");
        }
        printf("\n");
        star--;
        space++;
    }
    
    return 0;
}