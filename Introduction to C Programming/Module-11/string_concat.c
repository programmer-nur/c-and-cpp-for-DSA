#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[101];
  scanf("%s %s", a, b);
  int length_of_b = strlen(b);
  int length_of_a = strlen(a);
  for (int i = 0; i < length_of_b; i++) {
    a[length_of_a + i] = b[i];
  }

  printf("%s", a);
  return 0;
}