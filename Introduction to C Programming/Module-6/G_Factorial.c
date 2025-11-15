#include <stdio.h>

int main()
{
    int t;
    int n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        long long factorial = 1;
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {

            factorial *= j;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}