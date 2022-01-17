#include<bits/stdc++.h>
using namespace std;
int n,m,a[5000010];
vector<int> s,ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            s.push_back(a[i]);
        }
    }
    if(s.empty()){
        cout << -1; return 0;
    }
    sort(s.begin(),s.end(),greater<int>());
    int last=0;
    for(auto e:s){
        if(last==e) continue;
        ans.push_back(e);
        last=e;
    }
    if(ans.size()>=m){
        int cnt=0;
        for(auto e : ans){
            cout << e << '\n';
            if(++cnt==m) break;
        }
    }else{
        for(int i=ans.size()-1;i>=0;i--){
            cout << ans[i] << '\n';
        }
    }
    return 0;
}