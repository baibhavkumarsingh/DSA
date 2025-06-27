#include<bits/stdc++.h>
using namespace std;


/*
Print:-

*/
void print14(int n){

    char abc='A';


    for  (int i=0; i<n; i++){
        for(char j=0; j<=abc+i; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }


}

int main(){
    int n;
    cin>>n;

    print14(n);

    return 0;
}