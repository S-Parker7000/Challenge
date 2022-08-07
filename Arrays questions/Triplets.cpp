#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int target){
     //Logic
     //first sort the array 
     sort(arr.begin(), arr.end());
     vector<vector<int>> result;

     int n = arr.size();
         
     //pick every a[i], pair sum on the remaining part
     for(int i = 0; i <= n-3; i++){
       int s = i + 1;
       int e = n - 1;

       int sum = target - arr[i];
       //two pointer approach

       while(s < e){
       
       if(arr[s] + arr[e] == sum){
           result.push_back({arr[i], arr[s], arr[e]});
           s++;
           e--;
       }else if(arr[s] + arr[e] > sum){
           e--;
       }else{
           s++;
       }
       }
       
     }
     return result;
}

int main(){
  vector<int> arr = {1,2,4,3,5,7,6,8,9,15};
    int sum = 18;

  auto result = triplets(arr, sum);

  for (auto i : result)
  {
    for(auto no : i){
      cout<<no<<",";
    }
    cout<<endl;
  }
  
}