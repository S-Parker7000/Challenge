#include<iostream>
#include<vector>

using namespace std;

 void reverseArray(vector<int> &nums){
        int si = 0;
        int ei = nums.size()-1;
        while(si < ei){
            swap(nums[si], nums[ei]);
            si++;
            ei--;
        }
    }

int main(){
  vector<int> nums = {5,4,3,2,1};

  reverseArray(nums);
  for(auto x: nums){
    cout<<x<<",";
  }
}