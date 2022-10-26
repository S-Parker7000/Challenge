#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    vector<int> v;
    
    //insertion
     int n;;
     cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //   /* code */
    //   int num;
    //   cin>>num;
    //   v.push_back(num);
    // }

    //display

    vector<int> d{1,2,3,4,5};
    //insert element in the middle
    // d.resize(8);
    // for(int i = n; i > 2; i--){
    //   d[i] = d[i-1];
    // }

    // d[2] = 100;
    d.insert(d.begin()+2,100);

    d.erase(d.begin()+1, d.begin()+3);

    //reserve function
    d.reserve(1000);
    //The capacity will be 1000 from the very initial

    
    for(auto x: d){
      cout<<x<<",";
    }


return 0;
}