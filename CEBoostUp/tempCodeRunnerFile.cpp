#include<bits/stdc++.h>
using namespace std;
int dp[1010],n,w,a[1010],b[1010];
int ks(int x){
    if(x>w) return -9999999;
    if(dp[x]) return dp[x];
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,ks(x+a[i])+b[i]);
    }
    return dp[x]=mx;
}
int main(){
    cin >> n >> w;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    cout << ks(0);
}