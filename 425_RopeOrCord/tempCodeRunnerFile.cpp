#include<bits/stdc++.h>
using namespace std;
string s;
char temp[100100];
char c;
int l,r,x;
int main(){
    cin >> s;
    while(cin >> c){
        if(c=='D') break;
        if(c=='P') cout << s << '\n';
        if(c=='X'){
            cin >> l;
            cout << s[l] << '\n';
        }
        if(c=='E'){
            cin >> l >> r;
            s.erase(l,r-l);
        }
        if(c=='M'){
            cin >> l >> r >> x;
            for(int i=l;i<r;i++){
                temp[i-l]=s[i];
            }
            temp[r-l]='\0';
            s.erase(l,r-l);
            s.insert(x,temp);
        }
    }
    return 0;
}