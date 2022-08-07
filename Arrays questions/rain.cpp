#include<iostream>
#include<vector>

using namespace std;

int rain_trapped(vector<int> h){
  int sum = 0;
  int n = h.size();
   vector<int> l(n,0);
   vector<int> r(n,0);
   l[0]  = h[0];
   r[n-1] = h[n-1];

   
   for(int i = 1; i < n; i++){
    l[i] = max(l[i-1], h[i]);
    r[n-i-1] = max(r[n-i], h[n-i-1]);
   }

   

   for (int i = 0; i < n; i++)
   {
     sum = sum + min(l[i], r[i]) - h[i];
   }
   
   return sum;
   
}

int main(){
  vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

  int ans = rain_trapped(height);

  cout<<"Rain trapped is : "<<ans<<" unit"<<endl;


}