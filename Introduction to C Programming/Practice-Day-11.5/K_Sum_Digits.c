#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);

  char str[n + 1];
  scanf("%s", str);

  int length = strlen(str);
  int sum = 0;
  for (int i = 0; i < length; i++) {
    int value = str[i] - 48;
    sum += value;
  }

  printf("%d", sum);

  return 0;
}