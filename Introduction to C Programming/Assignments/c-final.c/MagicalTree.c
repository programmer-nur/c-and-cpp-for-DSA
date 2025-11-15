#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  //   printf("%d", n / 3);

  int baseNum = 5;

  int incrcssLine = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      incrcssLine++;
    }
  }

  int totalLines = baseNum + incrcssLine;

  int star = 1;
  int space = totalLines - 1;
  for (int i = 1; i <= totalLines; i++) {

    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int j = 1; j <= star; j++) {
      printf("*");
    }

    printf("\n");
    star += 2;
    space--;
  }

  for (int i = 0; i < baseNum; i++) {
    for (int j = 1; j <= baseNum; j++) {
      printf(" ");
    }
    for (int j = 1; j <= n; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}