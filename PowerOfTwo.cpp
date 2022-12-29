/*
    - File: PowerOfTwo.cpp
    ----------------
    - This program generates a list of the power 
    - of two up to the exponent limit entered by 
    - the user
*/

#include<iostream>
using namespace std;

/*
    Function prototype
*/

int raiseToPower(int n, int k);

/* 
    Main Program
*/

int main(){
    int limit;
    cout << "This program lists power of two. " << endl;
    cout << "Enter exponent limit.";
    cin >> limit;
    for (int i=0; i<=limit; i++)
    {
        cout<<"2 to the "<< i << " = " << raiseToPower(2,i) << endl;
    }
    return 0;
}

/*
    Function: raiseToPower
    Usage: int p = raiseToPower(n,k);
    Returns the integer n raised to the kth power.
*/

int raiseToPower(int n, int k){
    int result = 1;
    for(int i=0; i < k; i++){
        result*=n;
    }
    return result;
}
