#include<bits/stdc++.h>
using namespace std;

void print20(int n){
    int res=8;
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<res; j++){
            cout<<" ";
        }

        //star
         for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        res -= 2;
        cout<<endl;


    }
    int abc =2;
    for(int i=n; i<2*n-2; i++){

        //star
        for(int j=0; j<(2*n-1)-i; j++){
            cout<<"*";
        }

        //space
        for(int j=0; j<abc; j++){
            cout<<" ";
        }

        //star
        for(int j=0; j<(2*n-1)-i; j++){
            cout<<"*";
        }
        abc += 2;

        cout<<endl;
    }


}

int main(){

    int n;
    cin>>n;

    print20(n);

    return 0;
}