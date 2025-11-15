#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int good_pair = 0;
  int last_value = n;

  int j = 1;
  for (int i = 0; i < n; i++) {
    while (j != last_value) {

      //   printf("%d, %d\n", arr[i], arr[j]);
      if (arr[i] % 2 == 0 && arr[j] % 2 != 0) {
        good_pair++;
      } else if (arr[i] % 2 != 0 && arr[j] % 2 == 0) {
        good_pair++;
      }

      j++;
    }

    j = i + 2;
  }

  printf("%d\n", good_pair);

  return 0;
}