#include<bits/stdc++.h>
using namespace std;
struct node{
    long long x,y;
    bool friend operator <(node a,node b){
        return a.y>b.y;
    }
};
long long n,e,tx,ty,tw,d[100100];
vector<node> v[100100];
priority_queue<node> q;
bool f[100100];
int main(){
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> tx >> ty >> tw;
        v[tx].push_back({ty,tw});
        v[ty].push_back({tx,tw});
    }
    for(int i=2;i<=n;i++){
        d[i]=LLONG_MAX;
    }
    q.push({1,0});
    while(!q.empty()){
        node c=q.top();
        q.pop();
        if(f[c.x]) continue;
        f[c.x]=1;
        for(auto e:v[c.x]){
            if(d[e.x]>c.y+e.y && !f[e.x]){
                d[e.x]=c.y+e.y;
                q.push({e.x,d[e.x]});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << d[i] << " ";
    }
    return 0;
}
