#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x, y, odd = 0;

        scanf("%d %d", &x, &y);

        if (x > y)
        {
            for (int j = y + 1; j < x; j++)
            {
                if (j % 2 != 0)
                {
                    odd += j;
                }
            }
        }
        else
        {
            for (int j = x + 1; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    odd += j;
                }
            }
        }

        printf("%d\n", odd);
    }

    return 0;
}