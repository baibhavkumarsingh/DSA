#include <bits/stdc++.h>
using namespace std;

int main(){
    string s= "Shatakshi";
    int len= s.size();
    s[len-2]= 'H';

    cout<<s[2]<<endl;

    //to print 2nd last index
    cout<<s[len-1]<<endl;

    cout<<s[len-2];
    
    return 0;
}