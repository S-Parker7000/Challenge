#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int minSwap1(vector<int> arr){
  
  //store them in a pair with indices
  int ans = 0;
  int n = arr.size();
  pair<int,int> ap[n];
  for(int i = 0; i < n; i++){
    ap[i].first = arr[i];
    ap[i].second = i;
  }

  //sort
  sort(ap, ap+n);

  //cycle
  int cycle = 0;
  vector<bool> visited(n, false);

  for(int i = 0; i < n; i++){
     int node = i;
    //when we already visit a particular number 
    int old_index = ap[i].second;
    if(visited[i] == true or old_index == i){
        continue;
    }

    //not visited we have to cycle it
    if(!visited[i]){
       
    }
  }



}

int main(){
  vector<int> arr = {5,4,3,2,1};
  cout<<minSwap1(arr)<<endl;
}