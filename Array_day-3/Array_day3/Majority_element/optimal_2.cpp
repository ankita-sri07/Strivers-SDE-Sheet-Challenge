#include<bits/stdc++.h>
using namespace std;
//majority element more then N/2
int majorityElement(int arr[],int n){
 int i, candidate=-1, votes=0;
 for(i=0; i<n; i++){
    if(votes == 0){
        candidate=arr[i];
        votes=1;
    }
    else{
        if(arr[i] == candidate){
            votes++;
        }
        else 
            votes--;
    }
 }
 int count=0;
 for(i=0; i<n; i++){
    if(arr[i]==candidate)
       count++;
 }
 if(count>n/2)
   return candidate;

return -1;
}

int main()
{
int a[7] = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(a,7);
    cout << "The majority element is: " << ans << endl;
    return 0;
}