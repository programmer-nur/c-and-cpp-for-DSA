#include <stdio.h>

void is_wonderful() {};

int binary_palindrome(int n) {
  int str[10];

  int i = 0;
  while (n != 0) {
    int value = n % 2;
    printf("%d\n", value);
    str[i] = value;
    n = n / 2;
    i++;
  }

  printf("%d", str);
}

int main() {
  int n;
  scanf("%d", &n);

  int binary = binary_palindrome(n);

  return 0;
}