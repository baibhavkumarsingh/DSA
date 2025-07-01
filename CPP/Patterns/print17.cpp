#include<bits/stdc++.h>
using namespace std;

/*
    A
   ABA
  ABCBA
 ABCDCBA

*/

void print17(int n){

    for(int i=0; i<n; i++){

    //space
        for(int j=0; j<n-i-1; j++){
        cout<<" ";
        }

    //content
        char abc='A';
        int reverse = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<abc;
            if(j<reverse){
                abc++;
            }
            else abc--;
        }



    //space
         //space
        for(int j=0; j<n-i-1; j++){
        cout<<" ";
        }


         cout<<endl;


    }


}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        print17(n);
    }
    return 0;
}
