#include<bits/stdc++.h>
using namespace std;


/*
    *
   ***
  *****
 *******  
*********
 *******
  *****
   ***
    *
*/
//for upper part
void print9(int n){
    //space
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

    //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
    }
    //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }


        cout<<endl;

    }

}
//for lower part

void print(int n){

    
    for(int i=0; i<n; i++){
    //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
    //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;

    print9(n);
    print(n);

    return 0;
}
