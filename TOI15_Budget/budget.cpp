#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define x first
#define y second
using namespace std;
struct node{
    ll x,y,w;
    bool friend operator<(node a,node b){
        return a.w<b.w;
    }
};
bool cmp(const pii &a, const pii &b){
    if(a.y==b.y) return a.x<b.x;
    return a.y<b.y;
}
int p[3010];
int fp(int x){
    if(p[x]!=x) p[x]=fp(p[x]);
    return p[x];
}
ll cnt,n,e,tx,ty,tw,ts,npro,px,py,ans;
vector<node> v;
vector<pii> pro,b;
int main(){
    cnt=0;
    cin >> n >> e;
    for(int i=0;i<n;i++) p[i]=i;
    for(int i=0;i<e;i++){
        cin >> tx >> ty >> tw >> ts;
        if(ts==1){
            px=fp(tx);
            py=fp(ty);
            if(px!=py){
            p[fp(tx)]=p[fp(ty)];
            cnt++;
            }
        }else{
            v.push_back({tx,ty,tw});
        }
    }
    cin >> npro;
    for(int i=0;i<npro;i++){
        cin >> tx >> ty;
        pro.push_back({tx,ty});
    }
    sort(pro.begin(),pro.end(),greater<pii>());
    ll mn=INT_MAX;
    for(auto e:pro){
        if(e.y<mn){
            mn=e.y;
            b.push_back({e.x,e.y});
        }
    }
    sort(b.begin(),b.end());
    for(int i=0;i<v.size();i++){
        pii temp={v[i].w,0};
        v[i].w=upper_bound(b.begin(),b.end(),temp)->y;
    }
    sort(v.begin(),v.end());
    for(auto e:v){
        if(cnt==n-1) break;
        px=fp(e.x);
        py=fp(e.y);
        if(px!=py){
            cnt++;
            ans+=e.w;
            p[px]=py;
        }
    }
    cout << ans;
    
}