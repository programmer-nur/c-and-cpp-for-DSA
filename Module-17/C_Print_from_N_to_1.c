#include <stdio.h>

void printToN(int n) {
  if (n == 0)
    return;

  printf("%d", n);
  if (n > 1)
    printf(" ");
  printToN(n - 1);
}
int main() {
  int n;
  scanf("%d", &n);

  printToN(n);

  return 0;
}