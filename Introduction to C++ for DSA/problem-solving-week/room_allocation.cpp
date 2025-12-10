#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int total_rooms = 0;

    for (int i = 0; i < n; i++) {
      double res = double(a[i]) / 2;
      total_rooms += ceil(res);
    }
    cout << total_rooms << endl;
  }

  return 0;
}