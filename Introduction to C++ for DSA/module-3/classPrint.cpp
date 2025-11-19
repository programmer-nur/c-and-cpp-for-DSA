#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  char name[100];
  int roll;
  double gpa;
};

int main() {
  Student student1, student2;

  cin.getline(student1.name, 100);
  cin >> student1.roll >> student1.gpa;
  cin.ignore();
  cin.getline(student2.name, 100);
  cin >> student2.roll >> student2.gpa;

  cout << student1.name << " " << student1.roll << " " << student1.gpa << endl;
  cout << student2.name << " " << student2.roll << " " << student2.gpa << endl;

  return 0;
}