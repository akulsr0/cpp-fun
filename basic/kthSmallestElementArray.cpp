#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int kthSmallest(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main() {
  vector<int> arr = {14,5,-9,0,20,-11,-24,10,94,12,8};
  int k;
  cin >> k;
  cout << kthSmallest(arr, k) << endl;
  return 0;
}
