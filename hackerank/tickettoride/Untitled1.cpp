#include<bits/stdc++.h>
using namespace std;
int p[100100];
struct node{
    int x,y,w;
    bool friend operator<(node a,node b){
        return a.w>b.w;
    }
};
int fp(int x){
    if(p[x]!=x) p[x]=fp(p[x]);
    return p[x];
}
int cn,n,e,k,ta,tb,tc,x,y,ans=0;
priority_queue<node> q;
int main(){
    cin >> n >> e >> k;
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> tc;
        q.push({ta,tb,tc});
    }
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    cn=0;
    while(!q.empty() && cn<n-k-1){
        node c=q.top();
        q.pop();
        x=fp(c.x);
        y=fp(c.y);
        if(x!=y){
            p[x]=y;
            ans+=c.w;
            cn++;
        }
    }
    cout << ans;
    return 0;
}
