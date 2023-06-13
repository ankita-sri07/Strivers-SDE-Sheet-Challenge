#include<bits/stdc++.h>
using namespace std;
// Function to sort 0s,1s and 2s
void sort_arr(int A[],int n){
    // declaring 3 variables to store count
    int i,count0=0, count1=0, count2=0;

    //traverse the array
    for(i=0; i<n; i++){
        if(A[i]==0){
            count0=count0+1;
        } 
 
       else if(A[i]==1){
            count1=count1+1;
        }

        else{
            count2=count2+1;
        }
    }
    //Updating the array
    i=0;

   // storing all the 0s
    while(count0>0){
        A[i++]=0;
        count0--;
    }
// storing all the 1s
     while(count1>0){
        A[i++]=1;
        count1--;
    }
    // storing all the 2s
     while(count2>0){
        A[i++]=2;
        count2--;
    }
}

int main(){
int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(int);

    // Calling the function
    sort_arr(arr, n);

    // Printing the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
return 0;
}