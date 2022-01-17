#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
    ll x,y,w;
    bool friend operator< (node a,node b){
        if(a.y==b.y) return a.x<b.x;
        return a.y<b.y;
    }
};
vector<node> v;
vector<pair<ll,ll>> q;
ll n,ta,tb,tc;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb >> tc;
        v.push_back({ta,tb,tc});
    }
    sort(v.begin(),v.end());
    q.push_back({0,0});
    for(int i=0;i<n;i++){
        auto it=lower_bound(q.begin(),q.end(),(pair<ll,ll>){v[i].x,0});
        if(it!=q.begin()){
            it--;
            v[i].w+=it->second;
        }
        if(v[i].w>q.back().second) q.push_back({v[i].y,v[i].w});
    }
    cout << q.back().second;
    return 0;
}