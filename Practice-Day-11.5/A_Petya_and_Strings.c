#include <stdio.h>
#include <string.h>
int main() {
  char str_one[101];
  char str_two[101];

  scanf("%s", str_one);
  scanf("%s", str_two);

  int one_len = strlen(str_one);

  for (int i = 0; i < one_len; i++) {
    if (str_one[i] >= 65 && str_one[i] <= 90) {
      str_one[i] = str_one[i] + 32;
    }
    if (str_two[i] >= 65 && str_two[i] <= 90) {
      str_two[i] = str_two[i] + 32;
    }
  }

  int i = 0;
  while (1) {

    if (str_one[i] == '\0' && str_two[i] == '\0') {
      printf("%d", 0);
      break;
    } else if (str_one[i] < str_two[i]) {
      printf("%d", -1);
      break;
    } else if (str_one[i] > str_two[i]) {
      printf("%d", 1);
      break;
    } else {
      i++;
    }
  }

  return 0;
}