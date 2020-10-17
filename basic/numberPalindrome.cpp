#include<iostream>
using namespace std;

bool checkNumberPalindrome(int n) {
  int revNum = 0, temp = n;
  while (temp) {
    revNum = (revNum*10) + temp%10;
    temp = temp/10;
  }
  if(n==revNum) return true;
  return false;
}

int main() {
  int n;
  cin >> n;
  cout << (checkNumberPalindrome(n) ? "YES" : "NO") << endl;
  return 0;
}
