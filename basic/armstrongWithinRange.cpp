#include<iostream>
#include<cmath>
using namespace std;

bool checkArmstrong(int n) {
  int sum = 0, temp = n;
  while(temp) {
    sum = sum + pow(temp%10, 3);
    temp = temp/10;
  }
  if(sum == n) return true;
  return false;
}

void printArmstrongs(int l, int h) {
  if(l>h) {
    l = l+h;
    h = l-h;
    l = l-h;
  }
  for(int i=l; i<=h; i++) {
    if(checkArmstrong(i)) {
      cout << i << endl;
    }
  }
}

int main() {
  int l, h;
  cin >> l >> h;
  printArmstrongs(l, h);
  return 0;
}
