#include<bits/stdc++.h>
using namespace std;
 //majority element more then N/2
int majorityElement(vector<int> v){
    //size of the given array
    int n=v.size();
    for(int i=0; i<n; i++){
        //select element is v[i]
      int cnt=0;
      for(int j=0; j<n; j++){
        //counting the frequency of v[i]
        if (v[j]==v[i]){
            cnt++;
        }
      }
      //check if frequency is greater than n/2;
      if(cnt>(n/2))
        return v[i];
    }
    return -1;
}


int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<"The majority element is: "<<ans<<endl;
    
    return 0;
}