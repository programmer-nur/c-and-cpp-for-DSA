#include <stdio.h>

int main()
{
    int n, store;
    scanf("%d", &n);
    store = n;
    for (int i = 1; store != 0; i++)
    {
        int reverse;
        reverse = store % 10;
        printf("%d", reverse);
        store = store / 10;
    }

    return 0;
}