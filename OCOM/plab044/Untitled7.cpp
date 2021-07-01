#include<bits/stdc++.h>
using namespace std;
struct p{
    int n,t,w;
};
int pr[100100];
bool cmp(p a,p b){
    return a.w<b.w;
}
int fp(int x){
    if(pr[x]!=x) pr[x]=fp(pr[x]);
    return pr[x];
}
vector<p> v;
int ta,tb,tc,cnt,n,m,x,y,dis;
main(){
    cin >> n >>m;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v.push_back({ta,tb,tc});
    }
    for(int i=0;i<n;i++){
        pr[i]=i;
    }
    sort(v.begin(),v.end(),cmp);
    cnt=0;
    dis=0;
    for(auto e:v){
        if(cnt==n-1) break;
        x=fp(e.n);
        y=fp(e.t);
        if(x!=y){
            pr[x]=y;
            dis+=e.w;
            cnt++;
        }
    }
    cout << dis << '\n' << dis*100;
}
