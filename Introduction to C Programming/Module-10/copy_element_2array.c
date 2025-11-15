#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
    {
      scanf("%d", &b[i]);
    }

    int length = n+m;
    int c[length];


    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];

    }
    

    for (int i = 0; i < m; i++)
    {
        c[n+i] = b[i];
    }
    

    for (int i = 0; i < length; i++)
    {
      printf("%d ", c[i]);
    }
    
    return 0;
}