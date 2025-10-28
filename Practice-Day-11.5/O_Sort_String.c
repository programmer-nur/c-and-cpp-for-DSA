#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);
  char str[101];
  scanf("%s", str);

  int length = strlen(str);

  char temp = str[0];

  int h = 10;
  int i = 0;
  while (h > 0) {
    printf("%c\n", str[i]);

    if (str[i] > temp) {
      str[i] = temp;
    }

    h--;
  }

  printf("%s", str);

  return 0;
}