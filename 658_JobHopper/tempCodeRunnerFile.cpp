#include<bits/stdc++.h>
struct node{
    int n,w,k;
    bool friend operator<(node a,node b){
        if(a.k==b.w) return a.w<b.w;
        return a.k>b.k;
    }
};
using namespace std;

priority_queue<node> q;
node c;
vector<pair<int,int>> v;
int n,m,t;
//q(n,w,k) = q(pos,traveled,jump)
int main(){
    cin >>  n >> m;
    for(int i=0;i<n;i++){
        cin >> t;
        v.push_back({t,i});
        q.push({i,0,0});
    }
    sort(v.begin(),v.end());
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.w==m){
            cout << c.k; return 0;;
        }
        for(int i=c.n+1;i<n;i++){
            if(v[i].first<=v[c.n].first) continue;
            int dist=v[i].second-v[c.n].second;
            if(dist<0) dist+=n;
            dist=max(dist,c.k);
            q.push({i,c.w+1,dist});
        }
    }
    return 0;
}