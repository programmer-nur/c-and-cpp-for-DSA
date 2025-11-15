#include <stdio.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);

  int arr[r][c];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  //   spacific row
  //   int row;
  //   scanf("%d", &row);
  //   for (int j = 0; j < c; j++) {
  //     printf("%d ", arr[row][j]);
  //   }

  int col;
  scanf("%d", &col);
  for (int j = 0; j < r; j++) {
    printf("%d ", arr[j][col]);
  }

  printf("\n");
  return 0;
}