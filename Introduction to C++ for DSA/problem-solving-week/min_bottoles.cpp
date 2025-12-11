#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
       int n,x;
       cin >> n >>x;

       int a[n];

       for (int i = 0; i < n; i++)
       {
        cin >> a[i];
       }
       
       double s = 0;

       for (int i = 0; i < n; i++)
       {
        s += a[i];
       }
   
      cout << ceil(s/x) << endl;
       
    }
    
 return 0;
}