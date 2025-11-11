#include <stdio.h>

int powerFun(int x, int expo) {
  int res = 1;

  for (int i = 1; i <= expo; i++) {
    res = res * x;
  }
  return res;
}

void calculateSum(int x, int n) {
  int sum = 0;

  sum += powerFun(x, 0) - 1;

  for (int i = 2; i <= n; i += 2) {

    int res = powerFun(x, i);
    sum += res;
  }

  printf("%d", sum);
}

int main() {
  int x, n;
  scanf("%d %d", &x, &n);
  calculateSum(x, n);
  return 0;
}