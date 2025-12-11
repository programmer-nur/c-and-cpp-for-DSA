#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }


        int mmOm = 0;
        int currentOm = 0;
      int mmAd = 0;
        int currentAd = 0;


        for (int i = 0; i < n; i++)
        {
            if(a[i] > 0){
                currentOm++;
                mmOm = max(mmOm,currentOm);
            }else{
                currentOm = 0;
            }

              if(b[i] > 0){
                currentAd++;
                mmAd = max(mmAd,currentAd);
            }else{
                currentAd = 0;
            }
        }
      

       
        if(mmAd == mmOm){
            cout << "Draw" << endl;
        }else if(mmAd > mmOm){
            cout << "Addy" << endl;
        }else{
            cout << "Om" << endl;
        }
    }

}
