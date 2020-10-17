#include<iostream>
#include<cmath>
using namespace std;

int binToDec(int n) {
  int sum = 0, c = 0, temp = n;
  while(temp) {
    sum = sum + (temp%10 * pow(2, c));
    temp = temp/10;
    c++;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  cout << binToDec(n) << endl;
  return 0;
}
