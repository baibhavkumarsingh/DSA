#include<bits/stdc++.h>
using namespace std;
/*
print
1
22
333
4444
55555
*/
void print4(int n){

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<i<<" ";//what we are printing that is we are printing the outer loop that is row number
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print4(n);

    return 0;
}