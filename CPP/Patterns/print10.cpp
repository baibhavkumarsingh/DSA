#include<bits/stdc++.h>
using namespace std;


/*
*
**
***
****
***
**
*
*/

//upper part
void print10(int n){
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<i+1; j++){
            cout<<"*";

        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }


        cout<<endl;
    }

}
//lower part
void print(int n){
    
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<n; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;

    print10(n);
    print(n);

    return 0;
}