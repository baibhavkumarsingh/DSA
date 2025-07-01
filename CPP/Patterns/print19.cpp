#include<bits/stdc++.h>
using namespace std;

void print19 (int n){
    for(int i=0; i<n/2; i++){

        //star
        for(int j=0; j<n/2-i; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<i*2; j++){
            cout<<" ";
        }

        //star
        for(int j=0; j<n/2-i; j++){
        cout<<"*";
        }

       
        cout<<endl;
    }
    for(int i=n/2; i<n; i++){
         //star
        for(int j=0; j<=i-n/2; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<(n-i-1)*2; j++){
            cout<<" ";
        }

        //star
        for(int j=0; j<=i-n/2; j++){
        cout<<"*";
        }

        cout<<endl;
    }

}

int main (){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        print19(n);
    }
    return 0;
}