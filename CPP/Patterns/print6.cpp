#include<bits/stdc++.h>
using namespace std;


/*
print
12345
1234
123
12
1
*/
void print6(int n){

    for (int i=0; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<j<<" ";//what we are printing that is we are printing the outer loop that is row number
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print6(n);

    return 0;
}