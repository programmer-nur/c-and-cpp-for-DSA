#include <stdio.h>
#include <string.h>
int main() {
  char str[10001];
  scanf("%s", str);
  int length = strlen(str);

  int feq[26] = {0};

  for (int i = 0; i < length; i++) {
    int val = str[i] - 'a';
    feq[val]++;
  }

  for (int i = 0; i < 26; i++) {
    if (feq[i] > 0) {
      printf("%c : %d\n", i + 'a', feq[i]);
    }
  }

  return 0;
}