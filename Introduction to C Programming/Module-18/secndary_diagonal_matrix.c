#include <stdbool.h>
#include <stdio.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);

  int arr[r][c];

  // Read matrix elements
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  bool is_diagonal = true;

  if (r == c) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i + j != r - 1 && arr[i][j] != 0) {
          is_diagonal = false;
        }
      }
    }

    if (is_diagonal)
      printf("This is an anti-diagonal matrix\n");
    else
      printf("This is not an anti-diagonal matrix\n");
  } else {
    printf("This is not a square matrix\n");
  }

  return 0;
}
