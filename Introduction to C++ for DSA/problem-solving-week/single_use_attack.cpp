#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int h,x,y;
        cin >> h >> x >> y;

        int attack = 0;
        int total = 0;
        
        while (h > total)
        {
          
            if(total + y >= h){
                total+=y;
                attack++;
            }else{
                total+=x;
                attack++;
            }
        }

        cout << attack << endl;
        
    }
    
 return 0;
}