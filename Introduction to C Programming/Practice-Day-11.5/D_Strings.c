#include <stdio.h>
#include <string.h>
int main() {
  char str_a[11], str_b[11];

  scanf("%s", str_a);
  scanf("%s", str_b);

  int a_len = strlen(str_a);
  int b_len = strlen(str_b);

  printf("%d %d\n", a_len, b_len);
  printf("%s%s\n", str_a, str_b);

  char temp = str_b[0];
  str_b[0] = str_a[0];
  str_a[0] = temp;

  printf("%s %s\n", str_a, str_b);

  return 0;
}