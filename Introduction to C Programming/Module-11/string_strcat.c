#include <stdio.h>
#include <string.h>
int main() {
  char a[100], b[101];
  scanf("%s %s", a, b);
  strcat(a, b);

  printf("%s", a);
  return 0;
}