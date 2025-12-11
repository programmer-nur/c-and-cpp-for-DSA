#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
        if(n == 1 || n ==3){
            cout << 1 << endl;
        }else{
        int div=0;
       if(n%2 ==0){
        div = n /2 -1;
       }else{
        div = n /2 + 1;
       }

       int res = n - div;
       cout << res << endl;
    }
    }
    
 return 0;
}