#include <stdio.h>

int sum(int num1, int num2) { return num1 + num2; }
int main() {
  int value = sum(10, 20);

  printf("%d", value);
  return 0;
}