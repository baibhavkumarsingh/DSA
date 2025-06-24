#include<bits/stdc++.h>
using namespace std;

/*
print
*****
****
***
**
*
*/
void print5(int n){

    for (int i=0; i<=n; i++){
        for (int j=0; j<n-i; j++){// (here 0=i and 5= target to get ) 0=5(in this 5=n and 0=i  5-0=5)   , 1=4(in this n which is 5-i which increment from 0 and now is 1  that is  5-1=4), 2=3(now i increment to 2 and n-2  5-2=3), 3=2(5-3=2), 4=1(54=1
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print5(n);

    return 0;
}