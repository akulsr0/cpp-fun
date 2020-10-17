#include <iostream>
using namespace std;

bool checkLeapYear(int year) {
  if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }
  return false;
}

int main() {
  int year;
  cin >> year;
  if(checkLeapYear(year)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
