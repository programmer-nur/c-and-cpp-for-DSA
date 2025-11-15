#include <stdio.h>
#include <string.h>
int main() {
  char str[10001];
  char ttr[10001];
  scanf("%s", str);
  scanf("%s", ttr);

  int slength = strlen(str);
  int tlength = strlen(ttr);

  printf("%d %d\n", slength, tlength);
  printf("%s %s\n", str, ttr);
  return 0;
}