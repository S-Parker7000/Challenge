#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> subarrSort(vector<int> a){
    //make a new vector and copy a
    vector<int> b(a);
    sort(a.begin(), a.end());

    int j = a.size()-1;
    int i = 0;
    //now compare
    
    while(i < a.size() and a[i] == b[i] ){
      
        i++;
      
    }
    
    while(j >=0 and a[j] == b[j]){
     
        j--;
      
    }

    //if i pointer reaches end
    if(i == a.size()){
      return {-1,-1};
    }

    return {i, j};
}

int main(){
  vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};

  vector<int> output = subarrSort(arr);
  for(int x: output){
     cout<<x<<",";
  }
}