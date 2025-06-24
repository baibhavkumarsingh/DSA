#include<bits/stdc++.h>
using namespace std;


/*
pattern is
1
12
123
1234
12345
*/

void print3(int n){
    for(int i=0; i<=n; i++){ // outer loop or  column is running from number 1
        for(int j=1; j<=i; j++){// inner loop of row is running from 1 and till where ? that is till the number of columns that is from 1 to how much that will decide by the number of column

        cout<<j<<" ";// now what are we printing that is we are printing the inner loop that is how much number till be print 

        }

        cout<< endl;
    }


}

int main(){
    int t;
    cin>>t;
    
    for (int i=0; i<t; i++){
        int n;
        cin>>n;

        print3(n);
    }
    return 0;
}