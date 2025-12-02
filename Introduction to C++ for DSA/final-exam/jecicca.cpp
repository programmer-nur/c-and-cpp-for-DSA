// Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

// NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

// Input Format

// Input will contain a string S containing names. There is a space in between two names.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of the string.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string names;
    getline(cin, names);
    stringstream ss(names);
    string word;
    bool flag = false;

     while (ss >> word) {
    if(word == "Jessica") {
        flag = true;
        break;
    }

}


if(flag) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}
    return 0;
}