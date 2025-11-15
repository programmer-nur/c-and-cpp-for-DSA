#include <stdio.h>
#include <string.h>
int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int arr[1];
    scanf("%d %d", &arr[0],&arr[1]);
    printf("%d %d\n", arr[0], arr[1]);
    // if (arr[0] == arr[1]) {
    //   printf("%s", "Square");
    // } else {
    //   printf("%s", "Rectangle");
    // }
  }

  return 0;
}