#include<bits/stdc++.h>
#define y second
#define x first
#define pii pair<long long,long long>
using namespace std;
vector<pii> v;
pii c;
bool f[10010];
long long cnt=0,n,m,sx,sy,k,s,t;
long long d[10010];
char mp;
priority_queue<pii> q;
int main(){
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> mp;
            if(mp=='A'){ 
                s=cnt;
                v.push_back({i,j});
                cnt++;
            }
            else if(mp=='B'){
                t=cnt;
                v.push_back({i,j});
                cnt++;
            }
            else if(mp=='X'){
                v.push_back({i,j});
                cnt++;
            }
        }
    }
    for(int i=0;i<cnt;i++) d[i]=INT_MAX;
    q.push({0,s});
    d[s]=0;
    f[s]=1;
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.y==t){
            cout << c.x;
            return 0;
        }
        for(int i=0;i<n;i++){
            long long dist=abs(v[c.y].x-v[i].x)+abs(v[c.y].y-v[i].y);
            if(dist<=k && d[i]>c.x+dist){
                d[i]=c.x+dist;
                q.push({d[i],i});
            }
        }
    }
    cout << -1;
    return 0;
}