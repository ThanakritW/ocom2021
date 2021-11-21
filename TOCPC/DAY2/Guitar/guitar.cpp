#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[310][310][310],m,a[310][310],s[310];
ll play(ll f,ll x,ll k){
    if(x>=m) return 0;
    if(dp[f][x][k]) return dp[f][x][k];
    if(k>0) return dp[f][x][k]=min(a[f][s[x]]+play(s[x],x+1,k),play(f,x+1,k-1));
    return dp[f][x][k]=a[f][s[x]]+play(s[x],x+1,k);
}
ll k,n;
int main(){
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++) cin >> s[i];
    cout << play(0,0,k);
    return 0;
}
