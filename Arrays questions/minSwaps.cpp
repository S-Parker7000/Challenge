#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;

int minSwaps(vector<int> arr){
    
    //store them in a pair of array with indices
    int n = arr.size();
    int ans = 0;
    pair<int, int> ap[n];

    for(int i = 0; i < n; i++){
       ap[i].first = arr[i];
       ap[i].second = i;
    }

    //sort
  sort(ap, ap+n);

  //main logic
  vector<bool> visited(n, false);

  for(int i = 0; i < n; i++){
    int old_pos = ap[i].second;
    //if the element is visited then continuw because it is at the correct position
    if(visited[i] == true or old_pos == i ){
      continue;
    }

    //now visiting the element index for the first time
    int node = i;
    int cycle = 0;

    while(!visited[node]){
      visited[node] = true;
      int next_node = ap[node].second;
      node = next_node;
      cycle++;
    }
    ans = ans + (cycle-1);
  }

  return ans;

}

int main(){
   vector<int> arr = {5,4,3,2,1};
   cout<<minSwaps(arr)<<endl;
}