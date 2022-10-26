#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
   int arr[] = {10,20,30,40,40,40,50,60,70};
   int n = sizeof(arr)/sizeof(int);

   int key;
   cin>>key;
   bool present = binary_search(arr, arr+n, key);
   if(present){
    cout<<"yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }

   for(int i = 0; i < n; i++){
    if(arr[i] == 40 and arr[i+1] != 40){
      cout<<"upperbound  from for loop : "<<i+1<<endl;
      break;
    }
   }

   auto lb = lower_bound(arr, arr+n, 40);
   cout<<lb-arr<<endl;

   auto ub = upper_bound(arr, arr+n, 40);
   cout<<ub-arr<<endl;

   cout<<"Occurence of element 40 iss;"<<ub-lb<<endl;

return 0;
}