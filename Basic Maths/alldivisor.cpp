#include<bits/stdc++.h>
using namespace std;

//find all divisor

void alldivisor(int n){
   for(int i=1; i<=n; i++){
    if(n%i==0)
    cout<<i<<" ";
   
}

int main(){

    int n;
    cin>>n;

    alldivisor(n);

    return 0;
}