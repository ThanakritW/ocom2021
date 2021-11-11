#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool a=1,b=0,c=0;
    cin >> s;
    for(auto e:s){
        if(e=='A') swap(a,b);
        if(e=='B') swap(b,c);
        if(e=='C') swap(a,c);
    }
    if(a) cout << '1';
    else if(b) cout << '2';
    else cout << '3';
}