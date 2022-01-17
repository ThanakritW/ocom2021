#include<bits/stdc++.h>
using namespace std;
struct node{
    long long x,y,w;
    bool friend operator<(node a,node b){
        return a.w<b.w;
    }
};
long long p[16000],n,k,x[16000],y[16000],dist;
long long fp(long long x){
    if(p[x]!=x) p[x]=fp(p[x]);
    return p[x];
}
vector<pair<long long,long long>> vx,vy;
vector<node> edge;
int main(){
    cin >> n >> k;
    for(long long i=0;i<n;i++){
        p[i]=i;
    }
    for(long long i=0;i<n;i++){
        cin >> x[i] >> y[i];
        // vx.push_back({x[i],i});
        // vy.push_back({y[i],i});
    }
    for(long long i=0;i<n;i++){
        for(long long j=i+1;j<n;j++){
            edge.push_back({i,j,abs(x[i]-x[j])+abs(y[i]-y[j])});
        }
    }
    // sort(vx.begin(),vx.end());
    // sort(vy.begin(),vy.end());
    // for(long long i=0;i<n-1;i++){
    //     edge.push_back({vx[i].second,vx[i+1].second,abs(vx[i].first-vx[i+1].first)+abs(y[vx[i].second]-y[vx[i+1].second])});
    //     edge.push_back({vy[i].second,vy[i+1].second,abs(x[vy[i].second]-x[vy[i+1].second])+abs(vy[i].first-vy[i+1].first)});
    // }
    sort(edge.begin(),edge.end());
    for(auto e:edge){
        if(n==k) break;
        long long px=fp(e.x);
        long long py=fp(e.y);
        if(px!=py){
            p[px]=py;
            dist+=e.w;
            n--;
        }
    }
    cout << dist;
    return 0;
}