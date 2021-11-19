#include<bits/stdc++.h>
using namespace std;
vector<long long> v[100100];
vector<long long> rnk[10100];
int lv[100100];
long long upgrade(long long x,long long y){
    long long total=0;
    lv[x]=1;
    for(auto e:v[x]){
        if(lv[e]==2) continue;
        if(lv[e]==1){
            lv[x]=0;
            return INT_MAX;
        }
        total+=upgrade(e,y-1);
        if(total>y){
            lv[x]=0;
            return INT_MAX;
        }
    }
    lv[x]=2;
    return total+1;
}
long long n,k,t,tx,tn,ans=0;
int main(){
    cin >> n >> k >> t;
    for(int i=1;i<=n;i++){
        cin >> tx >> tn;
        rnk[tx].push_back(i);
        for(int j=0;j<tn;j++){
            cin >> tx;
            v[i].push_back(tx);
        }
    }
    for(int i=1;i<=k;i++){
        bool p=false;
        for(auto e:rnk[i]){
            if(lv[e]==2) continue;
            t-=upgrade(e,t);
            if(t<0){
                // cout << "break " << e << " " << t <<  '\n';
                p=true;
                break;
            }
            // cout << "upgrade " << e << '\n';
        }
        if(p) break;
        ans++;
    }
    if(ans==0) cout << "-1";
    else cout << ans;
    return 0;
}