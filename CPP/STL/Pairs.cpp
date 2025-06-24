#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p ={1,2};

    cout<<p.first<<" "<<p.second<<endl;


    pair<int, pair<int,int>> s={3, {4,7}};

    cout<< s.first<< " "<< s.second.second<<" "<< s.second.first<<endl;

    pair<int,int> arr[] = { {2,3}, {3,5}, {7,8}};
    cout<<arr[1].second;
}

int main(){
     explainPair();


    return 0;
}