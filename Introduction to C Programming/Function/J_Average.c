#include <stdio.h>

void average(double mean) { printf("%.7lf", mean); }

int main() {
  int n;
  scanf("%d", &n);
  double arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lf", &arr[i]);
  }

  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  double res = sum / n;

  average(res);

  return 0;
}