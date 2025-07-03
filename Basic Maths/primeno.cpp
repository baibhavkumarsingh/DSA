#include<bits/stdc++.h>
using namespace std;

//find prime number

void prime(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
    //finding factors that is if n leaves  0 as a remaidner when divided by i it is factorial
    if(n%i==0)
    //counting number of factors
    cnt=cnt+1;
    
}
    //if it has 2 factorial it is prime
    if(cnt==2) cout<<"Its a Prime Number";
    else cout<<"Its a Composite Number";
}

int main(){

    int n;
    cin>>n;

    prime(n);

    return 0;
}