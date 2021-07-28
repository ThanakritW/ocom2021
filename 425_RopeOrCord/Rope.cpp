#include<bits/stdc++.h>
using namespace std;
string a;
set<char> s;
char temp[100100];
char c;
int l,r,x;
int main(){
    cin >> s;
    for(int i=0;i<a.size();i++){
        s.emplace(s[i]);
    }
    while(cin >> c){
        if(c=='D') break;
        if(c=='P'){
            for(auto e:s)
        }
        if(c=='X'){
            cin >> l;
            cout << s[l] << '\n';
        }
        if(c=='E'){
            cin >> l >> r;
            s.erase(s.begin()+l,s.begin()+r);
        }
        if(c=='M'){
            cin >> l >> r >> x;
            if(r<=l) return 0;
            for(int i=l;i<r;i++){
                temp[i-l]=s[i];
            }
            temp[r-l]='\0';
            s.erase(s.begin()+l,s.begin()+r);
            s.insert(x,temp);
        }
    }
    return 0;
}