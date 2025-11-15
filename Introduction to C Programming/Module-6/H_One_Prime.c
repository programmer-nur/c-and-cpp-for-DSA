#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool isOdd = false;
    scanf("%d", &n);

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("NO\n");
            isOdd = true;
            break;
        }
    }
    if (!isOdd && n != 1)
    {
        printf("YES\n");
    }

    return 0;
}