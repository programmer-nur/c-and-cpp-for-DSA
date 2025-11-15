#include <stdio.h>

int min(int arr[], int length) {
  int result = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] < result) {
      result = arr[i];
    }
  }

  return result;
}
int max(int arr[], int length) {
  int result = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] > result) {
      result = arr[i];
    }
  }

  return result;
}
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min_value = min(arr, n);
  int max_value = max(arr, n);

  printf("%d %d", min_value, max_value);
  return 0;
}