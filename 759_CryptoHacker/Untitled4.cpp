#include<bits/stdc++.h>
using namespace std;
struct node{
    long n,w;
    bool friend operator<(node a,node b){
        return a.w>b.w;
    }
};
vector<long> v[50010];
node cur;
long n,m,k,a[50010],htime[50010],x,y,ans,cnt;
bool f[50010];
priority_queue<node> q;
int main(){
    cin >> n >> m >> k;
    for(int i=0;i<k;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> htime[i];
    }
    for(int i=0;i<m;i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=0;i<k;i++){
        q.push({a[i],htime[a[i]]});
    }
    ans=0;
    cnt=0;
    while(cnt<n){
        cur=q.top();
        q.pop();
        if(f[cur.n]==1) continue;
        f[cur.n]=1;
        ans+=cur.w;
        for(auto e:v[cur.n]){
            if(!f[e]){
                q.push({e,cur.w+htime[e]});
            }
        }
        cnt++;
    }
    cout << ans;
    return 0;
}
