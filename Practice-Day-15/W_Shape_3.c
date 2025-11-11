#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int star = 1;
  int space = n - 1;

  int sec_star = n * 2 - 1;
  int sec_space = 0;

  for (int i = 0; i < n; i++) {
    for (int i = 0; i < space; i++) {
      printf(" ");
    }

    for (int j = 0; j < star; j++) {
      printf("*");
    }

    printf("\n");
    star += 2;
    space--;
  }

  for (int i = 0; i < n; i++) {

    for (int i = 0; i < sec_space; i++) {
      printf(" ");
    }

    for (int j = 0; j < sec_star; j++) {
      printf("*");
    }

    printf("\n");
    sec_star -= 2;
    sec_space++;
  }

  return 0;
}