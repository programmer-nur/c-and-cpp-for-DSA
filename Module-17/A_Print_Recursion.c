#include <stdio.h>

void recor(int n) {
  if (n == 0)
    return;

  printf("I love Recursion\n");

  recor(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  recor(n);
  return 0;
}