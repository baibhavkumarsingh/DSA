#include<bits/stdc++.h>
using namespace std;
/*
E 
D E
C D E
B C D E
A B C D E
*/
void print18(int n){
    for(int i=0; i<n; i++){
        char abc='E';
        for(char j=abc-i; j<=abc; j++){
            cout<<j<<" ";
        }

        // //space
        // for(int j=0; j<n-i-1; j++){
        //     cout<<" ";
        // }

        cout<<endl;

    }


}

int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        print18(n);

    }
    return 0;
}