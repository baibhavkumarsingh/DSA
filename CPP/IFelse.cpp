#include<bits/stdc++.h>
using namespace std;

//Write a program that takes an input of age and print if you are adult or not
/*int main(){
    int age;
    cin >> age;
    if (age >= 18){
        cout << "You are an adult";
    }

    else if(age < 17){
        cout <<"You are not an adult";
    }


    return 0;
}*/





//Question second
/*Below 25 = F
25 to 44 = e
45 to 49 = d
50 to 59 = c
60 to 79= b
80 to 100 = a

ask user to enter marks
*/
// int main (){
//     int m;
//     cin>> m;

//     if (m<25){
//         cout<<"F"; 
//     }

//     else if  (m<= 44){
//         cout<< "E";
//     }

//     else if(m<= 49){
//         cout<< "D";
//     }

//     else  if (m<= 59){
//         cout<< "C";
//     }

//     else if(m<= 79){
//         cout<< "B";
//     }

//     else if(m<= 100){
//         cout<< "A";
//     }
//     return 0;
// }





//Question Three
/*
Take afe from user and then decide accordingly
if age <= 18
print not eligible for job

if age>= 18
print eligible for job

if age >= 55 anf age<== 57
print eligible for job but retirement soon

if age>57
print retirement time*/

int main(){
    int age;

    cin>>age;

    if(age<18){
        cout<<"not eligible for job";
    }
    //nested loop
    else if ( age<= 57){
        cout<<"eligible for job";
        if(age>=55){
            cout<<",retirement soon";
        }
    }

   

    else{
        cout<<"retirement time";
    }
    return 0;
}