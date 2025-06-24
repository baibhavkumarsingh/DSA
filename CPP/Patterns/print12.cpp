#include<bits/stdc++.h>
using namespace std;


/*
1      1
12    21
123  321
12344321
*/
void print12(int n){
    for(int i=0; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout<<j;
        }


        //space
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }

        //number
        for(int j=i; j>=1; j--){
            cout<<j;
        }

        cout<<endl;
    }




}

int main(){
    int n;
    cin>>n;

    print12(n);

    return 0;
}