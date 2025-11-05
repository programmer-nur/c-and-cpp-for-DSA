#include <stdio.h>

void hello_print(int n) {
  for (int i = 1; i <= n; i++) {
    if (i > 1)
      printf(" ");
    printf("%d", i);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  hello_print(n);
  return 0;
}
