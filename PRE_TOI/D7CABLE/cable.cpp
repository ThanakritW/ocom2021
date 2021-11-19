#include<bits/stdc++.h>
using namespace std;
struct node{
    long long x,y;
    bool friend operator<(node a,node b){
        return a.y<b.y;
    }
};
vector<node> v[2500];
priority_queue<node> q;
long long n,m,ta,tb,tc,s,y,tour,d[2600],t;
node c;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc-1});
        v[tb].push_back({ta,tc-1});
    }
    for(int i=0;i<n;i++) d[i]=0;
    cin >> s >> t >> tour;
    d[s]=INT_MAX;
    q.push({s,INT_MAX});
    while(!q.empty()){
        c=q.top(); q.pop();
        if(c.x==t){
            cout << ceil((double)tour/(double)c.y);
            return 0;
        }
        for(auto e:v[c.x]){
            if(d[e.x]<min(e.y,c.y)){
                q.push({e.x,d[e.x]=min(e.y,c.y)});
            }
        }
    }
    cout << "ree";
    return 0;
}