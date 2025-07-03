#include<bits/stdc++.h>
using namespace std;
 

//time complixity of this is 0(log10(n))  i.e., when we divde in a loop we take it as a log and also in this we are dividing by 10 so we are taking
//it as log10, if we would have divided it as 2 we would have taken log as log2 and so on;
// Logic behind of this is when we divide the number by 10 we get for example 5678/10 we will get quotient as 567.8 and in int it will be seen as 567.


void countdigit(int n){
   int cnt=0;
    while(n>0){
        n=n/10;
        cnt=cnt+1;
    }
    cout<<cnt;

}

int main(){
    int n;
    cin>>n;

    countdigit(n);

    return 0;
}