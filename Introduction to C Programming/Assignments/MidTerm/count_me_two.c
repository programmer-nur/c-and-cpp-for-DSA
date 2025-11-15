#include <stdio.h>
#include <string.h>
int main() {
  char str[100001];
  scanf("%s", str);
  int length = strlen(str);

  int consonant = 0;
  for (int i = 0; i < length; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
        str[i] != 'u') {
      consonant++;
    }
  }

  printf("%d", consonant);

  return 0;
}