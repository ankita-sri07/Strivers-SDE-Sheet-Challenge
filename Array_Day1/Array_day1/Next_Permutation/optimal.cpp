#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n){
    vector<int> result = permutation;
    for(int i=n-2; i>=0; i--){
       if(permutation[i]<permutation[i-1]){
        for(int j=n-1; j>=i+1; j--){
            if(permutation[j]>permutation[i]){
                swap(result[i],result[j]);
                reverse(result.begin()+i+1, result.end());
                return result;
            }
        }
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
   
int main(){
    return 0;
}