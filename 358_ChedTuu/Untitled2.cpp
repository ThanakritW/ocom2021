#include<bits/stdc++.h>
using namespace std;
int q,upper,lower,sc;
string s;
int main(){
    cin >> q; cin.ignore();
    for(int k=0;k<q;k++){
        getline(cin,s);
        upper=0;
        lower=0;
        sc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z') upper=1;
            else if(s[i]>='a' && s[i]<='z') lower=1;
            else{
                if(upper) sc+=1;
                if(lower) sc+=2;
                upper=0; lower=0;
            }
        }
        if(upper) sc+=1;
        if(lower) sc+=2;
        cout << sc << '\n';
    }
    return 0;
}
