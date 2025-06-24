#include<bits/stdc++.h>
using namespace std;

//Functions are set of code which perform something for you
//Functions are used to mpodularise code
//Functions are used to increase readability 
//Functions are used to use same code multiple times
//void =  when does not return anything
//return
//parameterised
// non parameterised

// void printName(string name){
//     cout<<"Hey " << name << endl;
// }


// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);


//     return 0;
// }

// Take two number and print its sum



// normal code
/*int main(){


    int num1, num2 ;
    cin>> num1>>num2;
    int num3= num1+ num2;
    cout<< num3;

    return 0;
}*/

// using return function
 /*int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
 }


int main(){
    int num1, num2;
    cin>>num1>>num2;
    int res = sum(num1, num2);
    cout <<res;


    return 0;
}*/


//using void
 void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout<< num3;
 }


int main(){
    int num1, num2;
    cin>>num1>>num2;
    sum (num1, num2);


    return 0;
}