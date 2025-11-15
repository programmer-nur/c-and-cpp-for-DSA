#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int we_solve = 0;

  for (int i = 0; i < n; i++) {
    int one, two, three;
    scanf("%d %d %d", &one, &two, &three);

    int sum = one + two + three;
    if (sum >= 2) {
      we_solve++;
    }
  }

  printf("%d\n", we_solve);

  return 0;
}
