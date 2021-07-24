#include<bits/stdc++.h>
using namespace std;
long long dp[1010][1010],n,w,a[1010],b[1010];
long long ks(int x,int y){
    if(x>n) return 0;
    if(y>w) return -9999999;
    if(dp[x][y]) return dp[x][y];
    return dp[x][y]=max(ks(x+1,y+a[x])+b[x],ks(x+1,y));
}
int main(){
    cin >> n >> w;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    cout << ks(0,0);
    return 0;
}