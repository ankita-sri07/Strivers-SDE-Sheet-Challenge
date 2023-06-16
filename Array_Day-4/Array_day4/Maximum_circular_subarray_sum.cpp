#include <bits/stdc++.h>
using namespace std;
// Case 1-: Needs Wrapping  {-1,4,-6,7,5,4}
// case 2-: Not needs wrapping {4,-4,6,-6,10,-11,12}
// Max subrray sum=Total sum of array - Sum of non-contributing elements
int kadane(int arr[],int n){
    int curr_sum=0; 
    int max_sum=INT_MIN;
    for(int i=0; i<n; i++){
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int wrapsum;
int nonwrapsum;
nonwrapsum=kadane(arr,n);

int totalsum=0;
 for(int i=0; i<n; i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
 }
 wrapsum=totalsum+kadane(arr,n);
 cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}