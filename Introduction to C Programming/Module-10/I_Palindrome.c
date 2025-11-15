#include <stdio.h>
#include <string.h>
int main() {
  char str[1001];
  scanf("%s", str);

  int length = strlen(str);

  int i = 0;
  int j = length - 1;

  int check = 0;
  while (i < j) {
    char temp = str[i];
    str[i] = str[j];
    printf("%c %c\n", str[j], temp);
    if (str[j] == temp) {
      check = 1;
    } else {
      check = 0;
    }
    i++;
    j--;
  }

  if (check) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}