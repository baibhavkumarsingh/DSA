#include<bits/stdc++.h>
using namespace std;

/*
Print 
*
**
***
****
*****

Rules are same
*/

void print2(int n){
    for(int i=0; i<n; i++){// outer join i.e column part
        for(int j=0; j<=i; j++){ // beacuse for every column i.e for every outer join there is number of stars in row same as line number of column
            cout<<"*";
        }
        cout<< endl;
    }




}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print2(n);
    }

    return 0;
}