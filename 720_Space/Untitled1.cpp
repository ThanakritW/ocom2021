#include<bits/stdc++.h>
using namespace std;
struct node{
    string n;
    int w,t;
    bool friend operator<(node a,node b){
        if(a.t==b.t) return a.w>b.w;
        return a.t>b.t;
    }
};
unordered_map<string,vector<node>> v;
unordered_map<string,int> year,w;
string tx,ty,s,t;
priority_queue<node> q;
int ta,n,e,g,m;
node c;
main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> e;
    cin >> s >> t >> g;
    for(int i=0;i<n;i++){
        cin >> tx >> ta;
        year[tx]=ta;
        w[tx]=INT_MAX;
    }
    for(int i=0;i<e;i++){
        cin >> tx >> ty >> ta;
        v[tx].push_back({ty,ta,0});
        v[ty].push_back({tx,ta,0});
    }
    w[s]=0;
    q.push({s,0,year[s]});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.n==t){
            cout << c.t << " " << c.w;
            return 0;
        }
        for(auto e:v[c.n]){
            if(c.w+e.w<w[e.n] && c.w+e.w<=g){
                w[e.n]=c.w+e.w;
                q.push({e.n,w[e.n],max(year[e.n],c.t)});
            }
        }
    }
}
