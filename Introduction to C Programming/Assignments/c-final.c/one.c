#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);

  long long arr[t][4];

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%lld", &arr[i][j]);
    }
  }

  for (int i = 0; i < t; i++) {
    long long int totalMultiplication = 1;
    for (int j = 1; j < 4; j++) {
      totalMultiplication = totalMultiplication * arr[i][j];
    }

    long long int multypled = arr[i][0];
    if (totalMultiplication == 0) {
      printf("-1\n");
    } else if (multypled == 0) {
      printf("0\n");
    } else if (multypled % totalMultiplication == 0) {
      long long int result = multypled / totalMultiplication;

      printf("%lld\n", result);
    } else {
      printf("-1\n");
    }
  }

  return 0;
}