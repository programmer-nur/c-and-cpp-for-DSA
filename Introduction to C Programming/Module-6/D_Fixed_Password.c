#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x;
    bool isContinue = true;
    while (isContinue)
    {
        scanf("%d", &x);

        if (x == 1999)
        {
            printf("Correct\n");
            isContinue = false;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}