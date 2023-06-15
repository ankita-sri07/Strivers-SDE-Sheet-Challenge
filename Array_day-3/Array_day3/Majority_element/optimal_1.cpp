#include<bits/stdc++.h>
using namespace std;
//majority element more then N/2
int majorityElement(vector<int> v){
    int count=0;
    int candidate=0;
     for(int num: v){
        if(count==0){
            candidate=num;

        }
        if(num==candidate) count++;
        else count -=1;
     }
     return candidate;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}