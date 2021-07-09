#include<bits/stdc++.h>
using namespace std;
struct node{
    int n,w;
    bool friend operator<(node a,node b){
        return a.w>b.w;
    }
};
int n,m,k,qe,ta,tb,tc,t;
priority_queue<node> q;
vector<node> v[30100];
unordered_map<int,int> d[30100];
main(){
    cin >> n >> m >> k >> qe;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc});
    }
    for(int x=0;x<k;x++){
        cin >> t;
        for(int i=0;i<n;i++){
            d[i][t]=INT_MAX;
        }
        d[t][t]=0;
        q.push({t,0});
        while(!q.empty()){
            node c=q.top();
            q.pop();
            for(auto e:v[c.n]){
                if(d[e.n][t]>c.w+e.w){
                    d[e.n][t]=c.w+e.w;
                    q.push({e.n,d[e.n][t]});
                }
            }
        }
    }
    for(int i=0;i<qe;i++){
        cin >> ta >> tb >> tc;
        cout << d[ta][tb]+d[tc][tb] << '\n';
    }
}
