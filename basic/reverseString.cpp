#include<iostream>
using namespace std;

string revString(string s) {
  string rev = s;
  int l = s.length();
  for(int i=0; i<s.length()/2; i++) {
    char t = rev[i];
    rev[i] = rev[l-i-1];
    rev[l-i-1] = t;
  }
  return rev;
}

int main() {
  string s;
  cin >> s;
  cout << revString(s) << endl;
  return 0;
}
