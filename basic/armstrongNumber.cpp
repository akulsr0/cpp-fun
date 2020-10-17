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

int main() {
  int n;
  cin >> n;
  cout << (checkArmstrong(n) ? "YES" : "NO") << endl;
  return 0;
}
