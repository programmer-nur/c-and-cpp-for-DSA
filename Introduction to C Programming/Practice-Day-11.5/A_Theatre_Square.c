#include <stdio.h>

int main() {
  long long n, m, a; // use long long to handle large numbers
  scanf("%lld %lld %lld", &n, &m, &a);

  // compute number of tiles along length and width, rounding up
  long long tile_length = (n + a - 1) / a;
  long long tile_width = (m + a - 1) / a;

  long long total_tiles = tile_length * tile_width;

  printf("%lld\n", total_tiles);
  return 0;
}
