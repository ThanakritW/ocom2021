#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
    ll n,w;
    bool friend operator<(node a,node b){
        return a.w<b.w;
    }
};
priority_queue<node> q;
vector<int> v[100010],b[100010];
vector<pair<int,int>> question;
ll n,m,nq,t[100010],df[100010],db[100010],ta,tb,tc;
node c;
bool ff[100010],fb[100010];
int main(){
    cin >> n >> m >> nq;
    for(int i=1;i<=n;i++){
        t[i]=INT_MAX;
        df[i]=0;
        db[i]=0;
    }
    for(int i=0;i<m;i++){
        cin >> ta >> tb;
        v[ta].push_back(tb);//forward
        b[tb].push_back(ta);//backtrack
    }
    for(int i=1;i<=nq;i++){
        cin >> ta >> tb;
        if(ta==1) t[tb]=i;//min_time
        else question.push_back({tb,i});
    }
    df[1]=INT_MAX;
    q.push({1,INT_MAX});
    while(!q.empty()){
        c=q.top(); q.pop();
        if(ff[c.n]) continue;
        ff[c.n]=1;
        for(auto e:v[c.n]){
            if(df[e]<min(t[e],c.w) && !ff[e]){
                df[e]=min(t[e],c.w);
                q.push({e,df[e]});
            }
        }
    }
    db[n]=INT_MAX;
    q.push({n,INT_MAX});
    while(!q.empty()){
        c=q.top(); q.pop();
        if(fb[c.n]) continue;
        fb[c.n]=1;
        for(auto e:b[c.n]){
            if(db[e]<min(t[e],c.w) && !fb[e]){
                db[e]=min(t[e],c.w);
                q.push({e,db[e]});
            }
        }
    }
    for(auto e:question){
        if(e.second<df[e.first] && e.second<db[e.first]) cout << "1\n"; 
        else cout << "0\n";
    }
    return 0;
}