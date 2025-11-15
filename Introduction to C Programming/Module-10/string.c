#include <stdio.h>

int main() {
  char ar[3];
  for (int i = 0; i < 3; i++) {
    scanf("%c", &ar[i]);
  }

  for (int i = 0; i < 3; i++) {
    printf("%c\n", ar[i]);
  }

  return 0;
}