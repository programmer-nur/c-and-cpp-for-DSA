#include <stdio.h>
#include <string.h>
int main() {
  char a[101], b[101];

  scanf("%s %s", a, b);

  int com_str = strcmp(a, b);

  if (com_str == 0) {
    printf("Equal\n");
  } else if (com_str < 0) {
    printf("A is smaller\n");
  } else if (com_str > 0) {
    printf("B is smaller\n");
  }
  return 0;
}