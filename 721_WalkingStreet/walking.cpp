//40 คะแนน
#include<bits/stdc++.h>
#define ll int
using namespace std;
struct shp{
    ll n,p,s;
};
shp shop[110];
ll n,ans=0;
pair<ll,ll> dp[22][110][10];
pair<ll,ll> buy(ll nshop,ll money,ll steal){
    if(nshop==n) return {0,money};
    else if(dp[nshop][money][steal]!=(pair<ll,ll>){0,0}) return dp[nshop][money][steal];
    else{
        pair<ll,ll> tmp,mx={0,0};
        for(int i=0;i<=steal;i++){
            mx.first=max(mx.first,shop[nshop].s*i);
            for(int j=0;j<=shop[nshop].n-i;j++){
                if((money-shop[nshop].p*j)>=0){
                    tmp = buy(nshop+1,money-shop[nshop].p*j,steal-i);
                    tmp.first+=shop[nshop].s*(i+j);
                    if(tmp.first>=mx.first){
                        if(tmp.first==mx.first){
                            mx.second=max(mx.second,tmp.second);
                        }
                        else{
                            mx=tmp;
                        }
                    }
                }   
            }
        }
        return dp[nshop][money][steal]=mx;
    }
}
ll x,k,m,p,s;
int main(){
    cin >> n >> x >> k;
    for(int i=0;i<n;i++){
        cin >> m >> p >> s;
        shop[i]={m,p,s};
    }
    pair<ll,ll> ans=buy(0,x,k);
    cout << ans.first << " " << ans.second;
    return 0;
}