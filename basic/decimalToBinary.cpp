#include<iostream>
using namespace std;

int decToBin(int n) {
  string r;
  if(n == 0 || n == 1) return n;
  while(n) {
    r = (n%2==0 ? "0" : "1") + r;
    n = n/2;
  }
  return stoi(r);
}

int main() {
  int n;
  cin >> n;
  cout << decToBin(n) << endl;
  return 0;
}
