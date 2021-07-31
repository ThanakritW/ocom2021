#include<bits/stdc++.h>
using namespace std;
set<int> s;
bool f[20];
vector<int> v[20];
int ta,tb,n;
void dfs(int c,int p){
    p=(p*10)+c;
    if(c==2 && p!=2){
        s.insert(p);
        return;
    }
    else if(f[c]!=1){
        f[c]=1;
        for(auto e:v[c]){
            dfs(e,p);        
        }
        f[c]=0;
    }
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        v[ta].push_back(tb);
        v[tb].push_back(ta);
    }
    dfs(2,0);
    for(auto e:s) cout << e << '\n';
}