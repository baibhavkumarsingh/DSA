#include<bits/stdc++.h>
using namespace std;
/*
print
     *
    ***
   *****
  *******  
*/
void print7(int n){

    for (int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++ ){
            cout<<" ";
        }

        //star
        for (int j=0; j<2*i+1; j++){//if given 4 row then in first row we print 1 star now 0->1(2*i+1= 2*0+1=1 )  1->3(2*i+1= 2*1+1)  2-> 5(w2*i+1=2*2+1)  3->7(4-3)
            cout<<"*";
        }//what we are printing that is we are printing the outer loop that is row number
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" " ;
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print7(n);

    return 0;
}