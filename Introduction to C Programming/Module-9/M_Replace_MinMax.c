#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], min = arr[0];
  int minidx = 0, maxidx = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      maxidx = i;
    } else if (arr[i] < min) {
      min = arr[i];
      minidx = i;
    }
  }

  int temp = max;
  max = min;
  min = temp;

  arr[minidx] = min;
  arr[maxidx] = max;
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}