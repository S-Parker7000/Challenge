#include<iostream>
#include <vector>
using namespace std;

int lengthofMount(vector<int> arr){
   int length = 0;
   int n = arr.size();


   for(int i = 1; i < n -1;){
    //for getting peak
    if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
      int cnt = 1;
      int j = i;  // pointer for moving backward
       
     //count backward in mount from the peak
       while(j>=1 and arr[j] > arr[j-1]){//j>=1 condition for not getting segmentation fault
          j--;
          cnt++;
       }

       //count forward using the i variable
       while(i<=n-2 and arr[i] > arr[i+1]){
        i++;
        cnt++;
       }

       length = max(length, cnt);

    }else{
      i++;
    }

    

    
}
return length;
}



int main(){
    vector<int> mountain = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    int length = lengthofMount(mountain);

    cout<<"Length of mountain :"<< length <<endl;
}