#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int i = 0, j = n - 1;

  int check = 0;
  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    if (arr[j] == temp) {
      check = 1;
    } else {
      check = 0;
    }

    i++;
    j--;
  }

  if (check) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}