#include<bits/stdc++.h>
using namespace std;
struct node{
    int n; long long w;
    bool friend operator<(node a,node b){
        return a.w>b.w;
    }
};
vector<node> v[10010];
priority_queue<node> q;
int n,m,s,t,ta,tb,tc,cn,cw;
long long d[10010];
main(){
    cin >> n >> m >> s >> t;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc});
    }
    for(int i=0;i<n;i++){
        d[i]=INT_MAX;
    }
    q.push({s,0});
    while(!q.empty()){
        cn=q.top().n;
        cw=q.top().w;
        q.pop();
        if(cn==t){
            cout << cw << '\n' << cw*20;
            break;
        }
        for(auto e:v[cn]){
            if(d[e.n]>cw+e.w){
                d[e.n]=cw+e.w;
                q.push({e.n,d[e.n]});
            }
        }
    }
}
