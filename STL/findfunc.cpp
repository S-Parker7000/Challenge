#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int arr[] = {1,6,12,50,69};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    auto it = find(arr, arr+n, key);
    cout<<it-arr<<endl;

return 0;
}