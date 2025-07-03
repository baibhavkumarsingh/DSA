#include<bits/stdc++.h>
using namespace std;

//Reverse a number

void reverse(int n){
    int revNo=0;
    // store a n and we have to comapre this with revNo
    int dup=n;

    while(n>0){
        int lastdigit=n%10;
        

        revNo=(revNo*10)+lastdigit;


        //this is done to change the number always that is when 4567/10=456 and so onn..
        //and it will iterate till n=0
        n=n/10;
    }
    if(revNo == dup)
        cout<<"True";
    else
        cout<<"False";
    


}

int main(){

    int n;
    cin>>n;

    reverse(n);

    return 0;
}