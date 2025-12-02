#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    string s[n];

    for (int i = 0; i < n; i++)
    {
      cin.ignore();
      getline(cin,s[i]);
    }

     for (int i = 0; i < n; i++)
    {
    stringstream ss(s[i]);
    string word;
    string matcher;
    ss  >> word;
    ss >> matcher;

    cout << word << endl;
    cout << matcher << endl;
}
    
 return 0;
}