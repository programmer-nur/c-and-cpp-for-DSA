#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        

        char server = 'A';
        int bob =0;
        int alice =0;

        for(int i=0;i < n; i++){
            
            if(s[i] == server){
                if(s[i] == 'A'){
                    alice++;
                }else{
                    bob++;
                }
            }else{
                server = s[i];
            }
        }

        cout << alice << " " << bob << endl;
    }
}
