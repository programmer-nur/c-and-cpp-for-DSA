#include <stdio.h>
#include <string.h>
int main() {
  char str[100001];

  scanf("%s", str);
  int length = strlen(str);

  for (int i = 0; i < length; i++) {

    if (str[i] == 44) {
      str[i] = 32;
    } else if (str[i] >= 97 && str[i] <= 122) {
      str[i] = str[i] - 32;
    } else {
      str[i] = str[i] + 32;
    }
  }

  printf("%s", str);

  return 0;
}