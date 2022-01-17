#include<bits/stdc++.h>
using namespace std;
int n,k,ta,tb,total=0;
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
    for(int i=0;i<k;i++){
        cin >> ta;
        auto lower=lower_bound(sx.begin(),sx.end(),pair<int,int>{ta,0});
        auto upper=upper_bound(sx.begin(),sx.end(),pair<int,int>{ta,ta});
        total+=(int)(upper-lower);
    }
    cout << total;
    return 0;
}