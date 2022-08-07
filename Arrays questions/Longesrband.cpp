#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longest_band(vector<int> arr){
  unordered_set<int> s;
  int bcnt = 1;
  int n = arr.size();
  //insert data in set
  for(int x: arr){
    s.insert(x);
  }

  for(int i = 0; i < n; i++){
    //is the number starting
    int key = arr[i]-1;
    if(s.find(key) == s.end()){//that means key not found till the end
      int count = 1;
      int next_e = arr[i] + 1;
      while(s.find(next_e) != s.end()){
        count++;
        next_e++;
      }
      if(bcnt < count){
        bcnt  = count;
      }
    }
  }
  return bcnt;
}



int main(){
    vector<int> arr = {1,9,3,0,18,5,2,10,7,12,6};

    cout<<"Longest band present is of length :"<<longest_band(arr)<<endl;

}