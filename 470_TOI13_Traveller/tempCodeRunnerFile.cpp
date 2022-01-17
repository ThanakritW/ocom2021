#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
    ll n,w;
    bool friend operator<(node a, node b){
        return a.w>b.w;
    }
};
priority_queue<node> q;
vector<node> v[100100];
node c;
int f[100100];
ll n,m,s,t,k,tx,ty,tw,dl[100100],dr[100100];
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){ dl[i]=INT_MAX;dr[i]=INT_MAX;}
    cin >> s >> t >> k;
    for(int i=0;i<m;i++){
        cin >> tx >> ty >> tw;
        v[tx].push_back({ty,tw});
        v[ty].push_back({tx,tw});
    }
    dl[s]=0;
    q.push({s,0});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.w>k) break;
        if(f[c.n]) continue;
        if(c.n==t){
            cout << t << " " << c.w << " 0";
            return 0;
        }
        f[c.n]=1;
        for(auto e:v[c.n]){
            if(!f[e.n] && dl[e.n]>c.w+e.w){
                dl[e.n]=c.w+e.w;
                q.push({e.n,dl[e.n]});
            }
        }
    }
    while(!q.empty()) q.pop();
    dr[t]=0;
    q.push({t,0});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(f[c.n]==2) continue;
        if(f[c.n]==1){
            cout << c.n << " " << dl[c.n] << " " << c.w;
            return 0;
        }
        f[c.n]=2;
        for(auto e:v[c.n]){
            if(f[e.n]!=2 && dr[e.n]>c.w+e.w){
                dr[e.n]=c.w+e.w;
                q.push({e.n,dr[e.n]});
            }
        }
    }
    return 0;
}