#include<bits/stdc++.h>
using namespace std;

//find armstrong number

void armstrong(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int dup=n;
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);

        //this is done to change the number always that is when 4567/10=456 and so onn..
        n=n/10;
    }
    if(sum==dup) cout<<"This is an armstrong number";
    else cout<<"This is not an armstrong number";




}

int main(){

    int n;
    cin>>n;

    armstrong(n);

    return 0;
}