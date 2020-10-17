#include<iostream>
#include<vector>
using namespace std;

// Method 1
int getLargest1(vector<int> arr) {
  int max = arr[0];
  for(auto n: arr) {
    if(n>max) {
      max = n;
    }
  }
  return max;
}

// Method 2
int getLargest2(vector<int> arr) {
  return *max_element(arr.begin(), arr.end());
}

int main() {
  vector<int> arr = {14,5,-9,0,20,-11,-24,10,94,12,8};
  cout << getLargest1(arr) << " " << getLargest2(arr) << endl;
  return 0;
}
