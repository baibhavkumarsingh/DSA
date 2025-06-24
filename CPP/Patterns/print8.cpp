#include<bits/stdc++.h>
using namespace std;
/*
print
    
  *******  
   *****
    ***
     *
*/
void print8(int n){

    for (int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++ ){// for each row empty space is same as i that is for 1st it is i =0 for 2nd it is 1 that is i=1
            cout<<" ";
        }

        //star
        for (int j=0; j<2*n-(2*i+1); j++){//2n(28+1)=for first row 8-(2*0+1)=9, for i=1th row ie 2nd row=2*4-(2*1+1)=5 , for i=2 ie 3rd row= 2*4-(2*2+1)=3 and so onn
            cout<<"*";
        }//what we are printing that is we are printing the outer loop that is row number
        //space
        for(int j=0; j<i; j++){
            cout<<" " ;
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print8(n);

    return 0;
}