#include<bits/stdc++.h>
using namespace std;

void sort_arr(int arr[], int n){
    int lo=0,mid=0,high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            //If the element is 0
            case 0:
             swap(arr[lo++],arr[mid++]);
             break;
            //If the elemtnt is 1
            case 1:
            mid++;
            break;
            //If the element is 2
            case 2:
            swap(arr[mid],arr[high--]);
            break;

        }

/*
if(arr[mid]==0){
    swap(arr[lo],arr[mid]);
    lo++,mid++;
}
else if(arr[mid]==1){
    mid++;
}
else if(arr[mid]==2){
     swap(arr[mid],arr[high]);
     high--;
}*/
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