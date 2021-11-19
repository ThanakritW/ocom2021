#include<bits/stdc++.h>
using namespace std;
long long f[200100],n,e,tx,ty,tw,k,w,px,py;
struct node{
    long long x,y,w;
    bool friend operator < (node a,node b){
        return a.w>b.w;
    }
};
long long fp(int x){
    if(f[x]!=x) f[x]=fp(f[x]);
    return f[x];
}
vector<node> v;
int main(){
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> tx >> ty >> tw;
        v.push_back({tx,ty,tw-1});
    }
    for(int i=1;i<=n;i++) f[i]=i;
    sort(v.begin(),v.end());
    k=0;
    w=0;
    for(auto e:v){
        if(k==n-1) break;
        px=fp(e.x);
        py=fp(e.y);
        if(px!=py){
            w+=e.w;
            f[py]=px;
            k++;
        }
    }
    cout << w;
}