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
        if (i != j) {
          if (arr[i][j] != 0) {
            is_diagonal = false;
            printf("This is not a diagonal matrix\n");
          }
        }
      }
    }
    if (is_diagonal == true) {
      printf("This is a diagonal matrix\n");
    }
  } else {
    printf("This is not a diagonal matrix\n");
  }
  return 0;
}