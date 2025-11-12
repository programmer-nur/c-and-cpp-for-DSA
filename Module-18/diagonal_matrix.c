#include <stdbool.h>
#include <stdio.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);

  int arr[r][c];

  bool is_diagonal = true;

  if (r == c) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i != j) {
          if (arr[i][j] != 0) {
            is_diagonal = false;
          }
        }
      }
    }
    if (is_diagonal) {
      printf("This is a Diagonal matrix\n");
    } else {
      printf("This is Not a Diagonal matrix1\n");
    }
  } else {
    printf("This is not a Diagonal matrix2\n");
  }
  return 0;
}