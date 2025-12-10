#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, d;
    cin >> n >> d;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int gun_switch = 0;

    // Determine the gun needed for the first target
    string prevGun = (a[0] <= d ? "C" : "L");

    // If initial gun (C) cannot shoot first target, switch
    if (prevGun == "L") {
      gun_switch++;
    }

    // Process the remaining targets
    for (int i = 1; i < n; i++) {
      string currentGun = (a[i] <= d ? "C" : "L");

      if (currentGun != prevGun) {
        gun_switch++;
      }

      prevGun = currentGun;
    }

    cout << gun_switch << endl;
  }

  return 0;
}
