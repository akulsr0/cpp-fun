#include<iostream>
using namespace std;

int nthFib(int n) {
  if(n==0 || n==1) return n;
  return nthFib(n-1) + nthFib(n-2);
}

void printFibSeries(int n) {
  if(n<1) return;
  for(int i=1; i<=n; i++) {
    cout << nthFib(i) << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  printFibSeries(n);
  return 0;
}
