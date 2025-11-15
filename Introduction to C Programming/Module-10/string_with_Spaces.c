#include <stdio.h>

int main() {
  char s[50];
  //  gets(s);
  //  fgets(destination, max_length, source_stream)
  fgets(s, 50, stdin); // reads up to 49 chars + '\0'
  printf("%s", s);
  return 0;
}