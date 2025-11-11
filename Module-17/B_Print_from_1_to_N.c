#include <stdio.h>

void printToN(int n, int i) {
  if (n + 1 == i)
    return;

  printf("%d\n", i);
  printToN(n, i + 1);
}
int main() {
  int n;
  scanf("%d", &n);

  int i = 1;
  printToN(n, i);

  return 0;
}