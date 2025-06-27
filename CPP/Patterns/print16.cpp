#include<bits/stdc++.h>
using namespace std;


/*
Print
A 
B B
C C C
D D D D
*/

void print16(int n){

    for(int i=0; i<n; i++){
            char abc='A' +i;

        for(char j=0; j<= i; j++){
            
            cout<<abc<<" ";
            

        }
        cout<<endl;
    }



}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        print16(n);
    }
    return 0;
}