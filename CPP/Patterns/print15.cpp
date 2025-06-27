#include<bits/stdc++.h>
using namespace std;

void print15(int n){
    char sun='A';

    for (int i=0; i<n; i++){
        for(char j=sun; j<=sun +(n-i-1); j++){
            cout<<j<<" ";
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
        print15(n);
    }



    

    return 0;
}