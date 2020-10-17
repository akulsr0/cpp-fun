#include<iostream>
using namespace std;

string revString(string s) {
  string rev = s;
  int l = s.length();
  for(int i=0; i<l/2; i++) {
    char c = rev[i];
    rev[i] = rev[l-i-1];
    rev[l-i-1] = c;
  }
  return rev;
}

bool checkPalindrome(string s) {
  if(revString(s) == s) return true;
  return false;
}

int main() {
  string s;
  cin >> s;
  cout << (checkPalindrome(s) ? "YES" : "NO") << endl;
  return 0;
}
