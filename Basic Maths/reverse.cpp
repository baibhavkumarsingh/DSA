#include<bits/stdc++.h>
using namespace std;

//Reverse a number

void reverse(int n){
    int revNo=0;

    while(n>0){
        int lastdigit=n%10;
        

        //when we reverse  a number that is for example 4567 after using modulo i.e % it with 10 we get 7 as remainder and that 7 when multiplied
        //with revNo that is initally 0 and then again add it with last digit we will reverse it.
        //revNo=0;


        // last digit= 4567%10;  output=7
        //1st iteration  revNo=(revNo*10)+lastdigit ->   (0*10)+7=7;
        //2nd iteration 456%10=6  (revNo*10)+lastdigit->  (7*10)+6=76;
        //3rd iteration 45%10=5 (revNo*10)+lastdigit->  (76*10)+5=765
        //4th iteration 4%10=4 (revNo*10)+lastdigit->  (765*10)+4=7654;
        revNo=(revNo*10)+lastdigit;


        //this is done to change the number always that is when 4567/10=456 and so onn..
        n=n/10;
    }
    cout<<revNo;



}

int main(){

    int n;
    cin>>n;

    reverse(n);

    return 0;
}