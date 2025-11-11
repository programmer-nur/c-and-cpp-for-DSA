#include <stdio.h>

int result(int n) {
  int len[n];
  char ch[n + 2];
  for (int i = 0; i < n; i++) {
    scanf("%d %c", &len[i], &ch[i]);
  }

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < len[i]; j++) {
      printf("%c ", ch[i]);
    }

    printf("\n");
  }
}

int main() {
  int n;
  scanf("%d", &n);
  result(n);
  return 0;
}