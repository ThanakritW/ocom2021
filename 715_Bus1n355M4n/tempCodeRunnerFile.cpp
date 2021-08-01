#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
    ll x,w,p;
    bool friend operator<(node a,node b){
        if(a.w==b.w) return a.p>b.p;
        return a.w>b.w;
    }
};
ll n,m,k,s,t,ta,tb,tc,d[100100][5],ans;
bool f[100100][5];
vector<node> v[100100];
priority_queue<node> q;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k >> s >> t;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc,0});
        v[tb].push_back({ta,tc,0});
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            d[i][j]=INT_MAX;
        }
    }
    ans=INT_MAX;
    q.push({s,0,1});
    d[s][1]=0;
    while(!q.empty()){
        node c=q.top();
        q.pop();
        if(c.x==t && (c.p==2 || k==1)){
            cout << c.w;
            return 0;
        }
        if(c.p==k) c.p=0;
        c.p++;
        for(auto e:v[c.x]){
            if(d[e.x][c.p]>c.w+e.w){
                d[e.x][c.p]=c.w+e.w;
                q.push({e.x,d[e.x][c.p],c.p});
            }
        }
    }
    cout << ans;
    return 0;
}
