#include<bits/stdc++.h>
using namespace std;
set<int> s[100100];
int ta,tb,n,m;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> ta >> tb;
        s[ta].insert(tb);
    }
    for(int i=1;i<=n;i++){
        cout << i << ' ' << s[i].size() << '\n';  
    }
    return 0;
}