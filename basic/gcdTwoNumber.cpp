#include<iostream>
using namespace std;

int calculateGCD(int x, int y) {
  if(x==0) return y;
  return calculateGCD(y%x, x);
}

int main() {
  int x,y;
  cin >> x >> y;
  cout << calculateGCD(x, y) << endl;
  return 0;
}
