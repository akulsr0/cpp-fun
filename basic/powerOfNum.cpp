#include<iostream>
using namespace std;

double pow(int n, int p) {
  double ans = 1;
  if(p == 0) return ans;
  if(p > 0) {
    while(p) {
      ans = ans * n;
      p--;
    }
  } else {
    ans = 1/pow(n, p * -1);
  }
  return ans;
}

int main() {
  int n, p;
  cin >> n >> p;
  cout << pow(n, p) << endl;
  return 0;
}
