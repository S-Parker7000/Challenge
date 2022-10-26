#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
char s[100] = "Today is  a rainy day";

char *ptr = strtok(s," ");
cout<<ptr<<endl;

// ptr = strtok(NULL," "); //for printing is
// cout<<ptr<<endl;

while(ptr != NULL){
  ptr = strtok(NULL," ");
  cout<<ptr<<endl;
}

return 0;
}