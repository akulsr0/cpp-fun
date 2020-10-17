#include<iostream>
#include<cmath>
using namespace std;

double areaOfCircle(int r) {
  return M_PI * r * r;
}

int main() {
  int r;
  cin >> r;
  cout << areaOfCircle(r) << endl;
  return 0;
}
