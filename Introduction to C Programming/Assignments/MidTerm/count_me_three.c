#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char str[10001];
    scanf("%s", str);
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int length = strlen(str);
    for (int i = 0; i <= length; i++) {
      if (str[i] >= 97 && str[i] <= 122) {
        lowercase++;
      } else if (str[i] >= 65 && str[i] <= 90) {
        uppercase++;
      } else if (str[i] >= 48 && str[i] <= 57) {
        digit++;
      }
    }

    printf("%d %d %d\n", uppercase, lowercase, digit);
  }

  return 0;
}