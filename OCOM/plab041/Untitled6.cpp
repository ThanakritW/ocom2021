#include<bits/stdc++.h>
using namespace std;
struct node{
    int n,w;
    bool friend operator<(const node &a,const node &b){
        return a.w>b.w;
    }
};
vector<node> v[10010];
priority_queue<node> q;
node cur;
int n,e,s,t,ta,tb,tc,ans;
int w[10010];
main(){
    cin >> n >> e >> s >> t;
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc});
    }
    for(int i=0;i<n;i++){
        w[i]=INT_MAX;
    }
    q.push({s,0});
    while(!q.empty()){
        cur=q.top();
        q.pop();
        if(cur.n==t){
            ans=cur.w;
            cout << ans << '\n' << ans*20;
            break;
        }
        else{
            for(auto e:v[cur.n]){
                if(w[e.n]>cur.w+e.w){
                    w[e.n]=cur.w+e.w;
                    q.push({e.n,w[e.n]});
                }
            }
        }
    }
}
