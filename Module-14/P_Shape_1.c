#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int start = n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < start; j++) {
      printf("*");
    }

    printf("\n");
    start--;
  }

  return 0;
}