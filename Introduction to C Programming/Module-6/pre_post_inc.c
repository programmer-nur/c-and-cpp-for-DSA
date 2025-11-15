#include <stdio.h>

// int main()
// {
//     int x = 10;

//     // Pre-increment
//     // int y = ++x;
//     // post-increment
//     int y = x++;
//     printf("%d %d", x, y);
//     return 0;
// }

int main()
{
    int x = 10;
    int y = x++;
    int z = ++y;

    printf("%d", z++);
    return 0;
}