// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("hi ");
//         if (i > 2)
//         {
//             break;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 3;
//     while (i <= 5)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*\n");
//         }
//         i++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     for (int i = -4; i >= 0; i++)
//     {
//         for (int j = 5; j < 2; j++)
//         {
//             printf("#\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d", i);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i > 2)
        {
            continue;;
        }
        printf("hi");
    }

    return 0;
}