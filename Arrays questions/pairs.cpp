#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int sum){
     unordered_set<int> m;
     vector<int> result;
   
    for (int i = 0; i < arr.size(); i++)
    {
      /* code */
      //the paired number which we have to find in our map
      int x = sum - arr[i];
      if(m.find(x) != m.end()){ // this condition means nnumber is present
        
        //now insert the pair into the array
        result.push_back(x);
        result.push_back(arr[i]);
        return result;
      }
      
      //insert values inside the map
      m.insert(arr[i]);

      
    }
    return { };
    

}

int main(){
    vector<int> arr = {10, 2, 3, 5, -6, 3, 1};
    int sum = 4;

    vector<int> output = pairSum(arr, sum);

    for (int x : output)
    {
       cout<<x<<",";
    }
    
}