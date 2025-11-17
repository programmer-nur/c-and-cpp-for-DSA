#include <bits/stdc++.h>

using namespace std;

int main() {

  int *arr = new int[3];

  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  int *brr = new int[5];

  for (int i = 0; i < 3; i++) {
    brr[i] = arr[i];
  }

  delete[] arr;
  brr[3] = 40;
  brr[4] = 50;

  for (int i = 0; i < 5; i++) {
    cout << brr[i] << " ";
  }

  return 0;
}