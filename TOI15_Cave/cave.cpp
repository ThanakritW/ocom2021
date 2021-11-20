#include<bits/stdc++.h>
#define ll long long
#define x first
#define y second
using namespace std;
struct node{
    ll x,y,w;
    bool friend operator<(node a,node b){
        return a.y>b.y;
    }
};
bool f[10000][10000];
ll n,s,t,e,ts,tt,tw,k,mn,d[10000][10000],upper;
priority_queue<node> q;
node c;
vector<node> v[10010];
vector<pair<ll,ll>> ans;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s >> t >> e;
    for(int i=0;i<e;i++){
        cin >> ts >> tt >> tw;
        v[ts].push_back({tt,tw});
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            d[i][j]=INT_MAX;
        }
    }
    d[s][0]=0;
    q.push({s,0,0});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(f[c.x][c.w]) continue;
        f[c.x][c.w]=1;
        for(auto e:v[c.x]){
            if(d[e.x][c.w+1]>e.y+c.y){
                q.push({e.x,d[e.x][c.w+1]=e.y+c.y,c.w+1});
            }
        }
    }
    upper=INT_MAX;
    for(int i=0;i<n;i++){
        if(d[t][i]<upper){
            upper=d[t][i];
            ans.push_back({d[t][i],i-1});
        }        
    }
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> tt;
        mn=INT_MAX;
        for(auto e:ans){
            mn=min(mn,e.x+tt*(e.y));
        }
        cout << mn << " ";
    }
    return 0;
}