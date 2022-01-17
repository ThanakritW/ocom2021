#include<bits/stdc++.h>
using namespace std;
int n,k,ta,tb,mx=0;
vector<pair<int,int>> sx,sy;
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        sx.push_back({ta,tb});
        sy.push_back({tb,ta});
    }
    sort(sx.begin(),sx.end());
    sort(sy.begin(),sy.end());
    for(auto it=sx.begin();it!=sx.end();it++){
        auto upper=upper_bound(sx.begin(),sx.end(),pair<int,int>{it->first+k,0});
        mx=max(mx,(int)(upper-it)); 
    }
    for(auto it=sy.begin();it!=sy.end();it++){
        auto upper=upper_bound(sy.begin(),sy.end(),pair<int,int>{it->first+k,0});
        mx=max(mx,(int)(upper-it)); 
    }
    cout << mx;
    return 0;
}