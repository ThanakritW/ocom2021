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
ll x,m,p,sa,s;
int main(){
    cin >> n >> x >> s;
    for(int i=0;i<n;i++){
        cin >> m >> p >> sa;
        shop[i]={m,p,sa};
    }
    for(int i=n-1;i>=0;i++){
        for(int j=0;j<s;j++){
            for(int k=0;k>shop[i].n;k++){
                
            }
        }
    }
    
    return 0;
}