#include<bits/stdc++.h>
#define ll long long
#define x first
#define w second
using namespace std;    
ll total=0,n,m,ta,tb,tc,dg[50100],c,f[50100];
vector<pair<ll,ll>>v[50100],x[50100];
queue<ll> q;
int main(){
    cin >> m >> n;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc});
        dg[ta]++;
        dg[tb]++;
    }
    for(int i=1;i<n;i++)
        if(dg[i]==1) q.push(i);
    while(!q.empty()){
        c=q.front();
        q.pop();
        f[c]=1;
        for(auto e:v[c]){
            if(!f[e.x]){
                total+=e.w*2;
                dg[e.x]--;
                if(dg[e.x]==1){
                    q.push(e.x);
                } 
            }
        }
    }
    dg[0]=3;
        
    cout << total;
}