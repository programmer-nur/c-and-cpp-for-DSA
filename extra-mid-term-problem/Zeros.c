#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int x;
  scanf("%d", &x);

  if (arr[x-1] == 1) {
    arr[x-1] = 0;
  } else {
    arr[x-1] = 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}