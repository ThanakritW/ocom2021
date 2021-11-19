#include<bits/stdc++.h>
using namespace std;
int n,dp[1010][1010];
char a[1010];
void play(int l,int r){
    if(l>=r) return;
    else if(dp[l][r]) return;
    else if(a[l]==a[r]){
        play(l+1,r-1);
        dp[l][r] = 1+dp[l+1][r-1];
    }
    else{
        for(int i=l;i<r;i++){
            if(!dp[l][i]) play(l,i);
            if(!dp[i+1][r]) play(i+1,r);
            dp[l][r]=max(dp[l][r],dp[l][i]+dp[i+1][r]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    play(0,n-1);
    cout << dp[0][n-1];
    return 0;
}
