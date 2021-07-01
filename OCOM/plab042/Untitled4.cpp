#include<bits/stdc++.h>
using namespace std;
#define int long
struct node{
    int n,w;
    bool friend operator<(node a, node b){
        return a.w>b.w;
    }
};
int n,m,ta,tb,tc,w[510];
set<node> v[510];
priority_queue<node> q;
node c;
main(){
    cin>> n >> m;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].insert({tb,tc});
        v[tb].insert({ta,tc});
    }
    int mn = LONG_MAX;
    for(int i=0;i<n;i++){
        for(auto e:v[i]){
            q.push({i,0});
            for(int i=0;i<n;i++){
                w[i]=INT_MAX;
            }
            while(!q.empty()){
                c=q.top();
                q.pop();
                if(c.n==e.n){
                    mn=min(mn,c.w+e.w);
                    break;
                }
                for(auto k:v[c.n]){
                    if((k.n==i&&c.n==e.n) || (k.n==e.n && c.n==i)) continue;
                    if(w[k.n]>(k.w+c.w)){
                        w[k.n]=k.w+c.w;
                        q.push({k.n,w[k.n]});
                    }
                }
            }
            while(!q.empty()){q.pop();}
        }
    }
    cout << mn;
}
