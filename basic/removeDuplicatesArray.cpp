#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
  vector<int> arr = {1,2,2,4,0,5,2,3,0,2,1,5,3};
  set<int> s;
  for(int i=0; i<arr.size(); i++) {
    s.insert(arr[i]);
  }
  for(auto n: s) {
    cout << n << " ";
  }
  cout << endl;
  return 0;
}
