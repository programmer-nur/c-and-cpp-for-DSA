#include <stdio.h>

long long int factorial(int n) {
  if (n == 1) {
    return 1;
  }

  long long int multi = factorial(n - 1);
  return n * multi;
}

int main() {
  int n;
  scanf("%d", &n);

  long long int ans = factorial(n);

  printf("%d", ans);
  return 0;
}