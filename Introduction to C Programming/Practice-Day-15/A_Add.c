#include <stdio.h>

void sum(int x, int y) {
  int value = x + y;
  printf("%d", value);
}

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  sum(x, y);
  return 0;
}