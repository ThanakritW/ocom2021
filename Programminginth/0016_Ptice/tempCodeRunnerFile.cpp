#include<bits/stdc++.h>
using namespace std;
string s,a="ABCABCABCABC",b="BABCBABCBABC",c="CCAABBCCAABB";
int sa,sb,sc,k,n,mx;
int main(){
    cin >> n;
    cin >> s;
    for(int i=0;i<=n;i++){
        if(s[i]==a[k]) sa++;
        if(s[i]==b[k]) sb++;
        if(s[i]==c[k]) sc++;
        k++;
        if(k==12) k=0;
    }
    mx=max({sa,sb,sc});
    cout << mx << '\n';
    if(mx==sa) cout << "Adrian\n";
    if(mx==sb) cout << "Bruno\n";
    if(mx==sc) cout << "Goran\n";

    return 0;
}