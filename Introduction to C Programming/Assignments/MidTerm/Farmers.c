#include <math.h>
#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int m1, m2, day;
    scanf("%d %d %d", &m1, &m2, &day);

    double total_farmer = m1 + m2;
    double m1_farmer_do = m1 * day;

    double result = m1_farmer_do / total_farmer;
    double remaniang = day - result;

    printf(" Result %.0lf\n", ceil(remaniang));
  }

  return 0;
}