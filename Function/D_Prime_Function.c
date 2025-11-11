#include <math.h>
#include <stdio.h>

int isPrime(int num) {

  if (num <= 1)
    return 0;
  int flag = 1;

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    int res = isPrime(arr[i]);

    if (res) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}