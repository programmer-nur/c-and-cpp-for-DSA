#include <stdio.h>

void recor(int n) {

  if (n == 0)
    return;
  int last = n % 10;
  recor(n / 10);
  printf("%d ", last);
}

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    if (n == 0) {
      printf("0");
    }
    recor(n);

    printf("\n");
  }

  return 0;
}