#include<iostream>
using namespace std;

bool checkPrime(int n) {
  if(n<=1) return false;
  for(int i=2; i<n; i++) {
    if(n%i==0) return false;
  }
  return true;
}

void printPrimes(int l, int h) {
  if(l>h) {
    l = l+h;
    h = l-h;
    l = l-h;
  }
  for(int i=l; i<=h; i++) {
    if(checkPrime(i)) {
      cout << i << endl;
    }
  }
}

int main() {
  int l, h;
  cin >> l >> h;
  printPrimes(l, h);
  return 0;
}
