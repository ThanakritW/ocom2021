#include<bits/stdc++.h>
using namespace std;
int f[100010],ta,tb,cy=0,n,e;
stack<int> s;
vector<int> v[100010];
void topo(int x){
    f[x]=1;
    for(auto e:v[x]){
        if(f[e]==2) continue;
        if(f[e]==1){
            cy=1;
            return;
        }
        topo(e);
    }
    f[x]=2;
    s.push(x);
}
int main(){
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> ta >> tb;
        v[ta].push_back(tb);
    }
    for(int i=1;i<=n;i++){
        if(f[i]==0)
           topo(i);
        if(cy){
            cout << "no";
            return 0;
        }
    }
    while(!s.empty()){
        cout << s.top() << '\n';
        s.pop();
    }
    return 0;
}