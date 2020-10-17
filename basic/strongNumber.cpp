#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return n*factorial(n-1);
}

bool checkStrong(int n) {
  int sum = 0, temp=n;
  while (temp) {
    sum = sum + factorial(temp%10);
    temp=temp/10;
  }
  if(sum == n) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cin >> n;
  cout << (checkStrong(n) ? "YES" : "NO") << endl;
  return 0;
}
