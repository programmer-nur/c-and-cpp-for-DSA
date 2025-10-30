#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);
  char str[n];
  scanf("%s", &str);

  long long int sum = 0;
  for (int i = 0; i < n; i++) {
    int value = str[i] - '0';
    sum += value;
  }
  if (sum % 3 == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}