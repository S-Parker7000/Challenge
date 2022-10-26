#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

      //its a doubly linked list
      list<int> l{1,2,3,4,100};

      list<string> l2{"mango", "apple", "guava", "pineapple"};

      l2.sort();
      //print a list
      for(auto s: l2){
        cout<<s<<"-->";
      }

      cout<<endl<<"Which fruit you want to remove"<<endl;
      string f;
      cin>>f;

      l2.remove(f);
      for(auto s: l2){
        cout<<s<<"-->";
      }


return 0;
}