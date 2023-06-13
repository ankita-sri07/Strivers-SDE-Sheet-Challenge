// Pascal Triangle

#include<iostream>
using namespace std;

// details of bionomial coefficient function
int binomialCoeff(int n, int k);

//function to print first n lines of Pascal Triangle
void printPascal(int n){
    // iterate through every line and 
    //print entries in it
    for(int line=0; line<n; line++){
        //every line number of integer is equal to line number   
        for(int i=0; i<=line; i++)
            cout<<" "<<binomialCoeff(line , i);
            cout<<"\n";
        
    }
}

//for details of the binomial function

int binomialCoeff(int n,int k){
    int res = 1;
    if(k>n-k)
    k=n-k;
    for(int i=0; i<k; ++i){
        res*=(n-i);
        res/=(i+1); 
    }
    return res;
}

//Driver program

int main()
{
    int n=7;
    printPascal(n);
    return 0;
}