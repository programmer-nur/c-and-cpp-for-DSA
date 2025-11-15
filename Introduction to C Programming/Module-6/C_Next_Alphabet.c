#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a == 'z')
    {
        a = 97;
        printf("%c", a);
    }
    else
    {
        a += 1;
        printf("%c", a);
    }
    return 0;
}