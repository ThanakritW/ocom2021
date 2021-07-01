#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
vector<pair<int,int>> v[10010];
pair<int,int> c;
int n,e,s,t,ta,tb,tc;
main(){
    cin >> n >> e >> s >> t;
    int w[10000];
    for(int i=0;i<e;i++){
        cin >> ta >> tb >>tc;
        v[ta].push_back({tc,tb});
        v[tb].push_back({tc,ta});
    }
    for(int i=0;i<n;i++){
        w[i]=INT_MAX;
    }
    q.push({0,s});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.second==t){
            cout << c.first;
            break;
        }
        for(auto e:v[c.second]){
            if((e.first+c.first)<w[e.second]){
                w[e.second]=e.first+c.first;
                q.push({w[e.second],e.second});
            }
        }
    }
}
