#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector <int> v; // vector is a dynamic space(container) which store a element

    v.push_back(1);// Means 1 is given to v
    v.emplace_back(2);//Similar to push back , increase container size and insert 2 at back, it is faster than push back.

    vector<pair<int,int>>vec;

    vec.push_back({3,4});
    vec.emplace_back(3,4);

    vector<int> s(5,100); //conatiner with or size 5 100s are stored 

    vector<int> n(5);//conatiner with size 5 with 0 or garbage value is stored

    vector <int> s1(5,20);//container of 5 size with 5 20s value is stred.
    vector<int> s2(s1);// copying this container with other container



//iterator
    vector<int>::iterator a = v.begin(); //here a can be anything and rest all is a syntex
    //v.begin is that we are accessing the memory of a vector or arry its not the value inside  the element
    // to access the element inside a memorywe have to use *(v.begin())

    a++;
    cout<<*(a)<<" ";
    
    a=a+2;
    cout<<*(a)<<" ";

    vector<int>::iterator a=v.end();//it is not a last element it is after last element ie., we have to use i-- to get ot last element
    // vector<int>::iterator a=v.rend();// This is called reverse end which mean we want to reverse it
    // vector<int>::iterator a=v.rbegin();

    cout<< v[0]<< " " << v.at(0);//both are same
    cout<< v.back()<<" ";//element at back

    //how to print a vector there are three methond

    //1st
    for(vector<int>::iterator a=v.begin(); a!=v.end(); a++){
        cout<<*(a)<<" ";

    //2nd
    for(auto a = v.begin(); a!=v.end(); a++){
        cout<<*(a)<<" ";

    //3rd
    for (auto a: v){
        cout<< a <<" ";
    }
    }


//Erase
    //1st way
    v.erase(v.begin()+1);
    //{10,20,12,23} output will be {10,12,23}

    //2nd way(to erase multiple )
    v.erase(v.begin()+2, v.begin()+4);
    //{10,20,12,23,35} output will be {10,12,35}


//INSERT

    vector<int>v(2,100);
    //output {100,100}

    v.insert(v.begin(), 300);
     //output {300,100,100}
    v.insert(v.begin()+1,2,10);
     //output {300, 10,10,100,100}

     vector<int> copy(2,50);// Ouput{50,50}
     v.insert(v.begin(), copy.begin(), copy.end());
    //output {50,50, 300, 10,10,100,100}

//TO FIND SIZE OF ARRAY
    cout<<v.size();//here v={10,20}
    //ouput=2

//To Pop last element
    v.pop_back();//v={10,20}
    //output={10}

//TO SWAP ELEMENT OF ARRAY
   /* auto k={10,20};
    auto l={20,40};
    k.swap(l);
    //output k={20,30} and l={10,20}*/

    

//TO CLEAR ARRAY
    v.clear();
    //erase everything



}