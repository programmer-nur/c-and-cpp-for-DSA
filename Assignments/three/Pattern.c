#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int star = 1;
  int space = n - 1;

  int start_reverse = n * 2 - 3;
  int space_reverse = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int j = 1; j <= star; j++) {
      if (i % 2 == 0) {
        printf("-");
      } else {
        printf("#");
      }
    }
    printf("\n");
    star += 2;
    space--;
  }

  for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= space_reverse; j++) {
      printf(" ");
    }
    for (int j = 1; j <= start_reverse; j++) {
      if (i % 2 == 0) {
        printf("-");
      } else {
        printf("#");
      }
    }
    printf("\n");
    start_reverse -= 2;
    space_reverse++;
  }

  return 0;
}
