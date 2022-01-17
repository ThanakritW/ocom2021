#include<bits/stdc++.h>
using namespace std;
int ans[100100],ta,tb,d[100100],n,m;
vector<int> v[100100];
int pay(int x){
    if(v[x].empty()) return d[x];
    if(ans[x]) return ans[x];
    else{
        int temp=d[x];
        for(auto e:v[x]){
            temp+=pay(e);
        }
        return ans[x]=temp;
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n-1;i++){
        cin >> ta >> tb;
        v[ta].push_back(tb);
    }
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        d[ta]+=tb;
    }
    for(int i=1;i<=n;i++){
        cout << pay(i) << '\n';
    }
    return 0;
}
