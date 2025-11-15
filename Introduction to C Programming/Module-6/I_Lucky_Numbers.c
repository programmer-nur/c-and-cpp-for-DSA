#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i < 2; i++)
    {

        int reverse = n % 10;

        int devided = n / 10;

        if (reverse % devided == 0 || devided % reverse == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        break;
    }

    return 0;
}