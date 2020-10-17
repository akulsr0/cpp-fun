#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      for(int i=0; i<nums.size(); i++) {
        if(nums[i] == val) {
          nums.erase(nums.begin()+i);
          i--;
        }
      }
      return nums.size();
    }
};

int main() {
  vector<int> nums = {0,1,2,2,3,0,4,2};
  Solution soln;
  soln.removeElement(nums, 2);
  return 0;
}
