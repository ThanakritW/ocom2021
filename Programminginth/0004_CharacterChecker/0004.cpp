#include<bits/stdc++.h>
using namespace std;
string s;
bool cap,sml;
int main(){
    cin >> s;
    for(auto e:s){
        if(e<'a') cap=true;
        else sml=true;
        if(cap && sml){
            cout << "Mix";
            return 0;
        }
    }
    if(cap) cout << "All Capital Letter";
    else cout << "All Small Letter";
    return 0;
}