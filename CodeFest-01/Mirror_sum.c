#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int f_arr[n], s_arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &f_arr[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &s_arr[i]);
  }

  int i = 0, j = n - 1;
  int ans[n];
  while (i < n) {
    ans[i] = f_arr[i] + s_arr[j];
    i++;
    j--;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", ans[i]);
  }

  return 0;
}