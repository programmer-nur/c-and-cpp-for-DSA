#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int digit=1;
    int space =n-1;
    for (int i = 0; i < n; i++)
    {
    for (int j = 1; j <= space; j++)
       {
       printf(" ");
       }
       for (int j = 1; j <= digit; j++)
       {
       printf("%d ", j);
       }
       printf("\n");
       digit++; 
       space--;
    }
    
    return 0;
}