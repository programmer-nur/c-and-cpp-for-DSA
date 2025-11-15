#include <stdio.h>

int main() {
  long int a, b;
  scanf("%ld %ld", &a, &b);

  long long int multiply = a * b;

  printf("%lld", multiply);
  return 0;
}