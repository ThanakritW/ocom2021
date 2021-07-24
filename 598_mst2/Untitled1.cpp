#include<bits/stdc++.h>
using namespace std;
int p[500010];
struct node{
    int a,b,w;
    bool friend operator<(node a,node b){
        return a.w<b.w;
    }
};
int fp(int a){
    if(p[a]!=a) p[a]=fp(p[a]);
    return p[a];
}
vector<node> v;
int n,e,ta,tb,tc,cnt,x,y,dis;
main(){
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >>  ta >> tb >> tc;
        v.push_back({ta,tb,tc});
    }
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    sort(v.begin(),v.end());
    cnt=0;
    for(auto e:v){
        if(cnt==n-1) break;
        else{
            x=fp(e.a);
            y=fp(e.b);
            if(x!=y){
                p[x]=y;
                dis+=e.w;
                cnt++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << p[i] << '\n';
    }
    cout << dis;
}
