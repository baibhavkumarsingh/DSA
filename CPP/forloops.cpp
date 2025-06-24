#include<bits/stdc++.h>
using namespace std;

int main (){
    // //first method loops
    // for (int i =1; i<=10; i= i+1){
    //         cout<<"Shatakshi"<<endl;

    // }

     // 2nd method

    int i;
    for(i=1; i<=5; i=i+1){
        cout<< "Shatakshi"<< i<< endl;
    }

    cout << i<<endl;
    // reverse order
    int b;
    for(b=5; b>0; b=b-1){
        cout<< "Dubey"<< b << endl;
    }

    cout<< b<< endl;

    //while loop

    int a=1;
    while (a<=5){
        cout<<"Baibhav" << a<< endl;
        a= a+1;
    }

    // do while loop

    int c=2;
    do{
        cout<< "Kumar "<< c<< endl;
        c=c+1;
    }while (c<=1);

    return 0;

}