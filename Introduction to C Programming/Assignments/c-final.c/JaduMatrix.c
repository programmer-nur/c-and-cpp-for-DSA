#include <stdbool.h>
#include <stdio.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];

  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", &arr[i][j]);

  bool is_jadu = true;

  if (r != c) {
    is_jadu = false;
  } else {
    for (int i = 0; i < r; i++) {

      bool temp = true;
      for (int j = 0; j < c; j++) {

        if (i == j || i + j == r - 1) {
          if (arr[i][j] != 1) {
            temp = false;
          }
        } else if (i + j != r - 1 && arr[i][j] != 0 && i != j) {
          temp = false;
        }
      }
      if (temp == 0) {
        is_jadu = false;
        break;
      }
    }
  }

  if (is_jadu)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
