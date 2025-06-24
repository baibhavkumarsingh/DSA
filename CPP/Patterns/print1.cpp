#include<bits/stdc++.h>
using namespace std;


/* 
To print star shape

****
****
****
****

Rules:-
1.)  For the outer loop, count the no. of lines 
2.)  For the inner Loop, focus on the column and connect them somehow to the rows.
3.)  Whatever you are printing print them inside the inner for loop.
4.)  Observe symmetry (optional)
*/

void print1(int n){
    for(int i =0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"*";

        }
        cout<< endl;
    }
}
int main(){
    int n;
    cin>>n;

    print1(n);


    return 0;
}