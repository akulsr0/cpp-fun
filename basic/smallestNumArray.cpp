#include<iostream>
#include<vector>
using namespace std;

// Method 1
int getSmallest1(vector<int> arr) {
  int min = arr[0];
  for(auto n: arr) {
    if(n<min) {
      min = n;
    }
  }
  return min;
}

// Method 2
int getSmallest2(vector<int> arr) {
  return *min_element(arr.begin(), arr.end());
}

int main() {
  vector<int> arr = {14,5,-9,0,20,-11,-24,10,94,12,8};
  cout << getSmallest1(arr) << " " << getSmallest2(arr) << endl;
  return 0;
}
