#include <stdio.h>
#include <string.h>
int main() {
  char s1[10001];
  char s2[10001];
  int start, end;

  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%d %d", &start, &end);

  int s1_length = strlen(s1);

  for (int i = start; i <= end; i++) {
    s1[s1_length] = s2[i];
    s1_length++;
  }

  printf("%s", s1);

  return 0;
}