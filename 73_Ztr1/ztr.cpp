#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,w;
    bool friend operator<(node a,node b){
        if(a.x==b.x) return a.w>b.w;
        return a.x<b.x;
    }
};
vector<node> v;
int dp[1010][1010];
int n,ta,tb,tc;
//l=last accept job, c=considering job
int work(int c,int l){
    if(c>n) return 0;
    if(dp[c][l]) return dp[c][l];
    int mx=work(c+1,l);
    for(int i=c;i<=n;i++){
        if(v[l].y<v[i].x)
            mx=max(mx,work(i,i)+v[i].w);
    }
    return dp[c][l]=mx;
}
int main(){
    cin >> n;
    v.push_back({0,0,0});
    for(int i=1;i<=n;i++){
        cin >> ta >> tb >> tc;
        v.push_back({ta,tb,tc});
    }
    sort(v.begin(),v.end());
    cout << work(0,0);
    return 0;
}