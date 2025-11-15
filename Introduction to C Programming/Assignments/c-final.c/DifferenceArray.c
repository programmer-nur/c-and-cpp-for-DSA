#include <stdio.h>

int absoluteValue(int a, int b) {
  int res = a - b;

  if (res < 0) {
    res = -res;
  }
  return res;
}

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    int arrayOfA[n];

    for (int j = 0; j < n; j++) {
      scanf("%d", &arrayOfA[j]);
    }

    int arrayOfB[n];
    for (int i = 0; i < n; i++) {
      arrayOfB[i] = arrayOfA[i];
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arrayOfB[i] > arrayOfB[j]) {
          int temp = arrayOfB[i];
          arrayOfB[i] = arrayOfB[j];
          arrayOfB[j] = temp;
        }
      }
    }

    int arrayOfC[n];
    for (int i = 0; i < n; i++) {
      arrayOfC[i] = absoluteValue(arrayOfA[i], arrayOfB[i]);
    }

    for (int i = 0; i < n; i++) {
      printf("%d ", arrayOfC[i]);
    }

    printf("\n");
  }

  return 0;
}