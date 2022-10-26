#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     int n;
     cin>>n;
     //priority_queue<int> pq;//for max heap == max element removed first
     priority_queue<int, vector<int>, greater<int>> pq;

     for (int i = 0; i < n; i++)
     {
      /* code */
      int num;
      cin>>num;
      pq.push(num);
     }

     //display
     while(!pq.empty()){
      cout<<pq.top()<<",";
      pq.pop();
     }
     

return 0;
}