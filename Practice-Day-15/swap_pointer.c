#include <stdio.h>

// void swip(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }
// int main() {
//   int a = 6, b = 5;

//   swip(&a, &b);

//   printf("%d %d", a, b);

//   return 0;
// }

int main() {
  int arr[4] = {1, 2, 3, 4};
  int *p;
  p =arr +  3;
  printf("%d\n", *arr);
  return 0;
}