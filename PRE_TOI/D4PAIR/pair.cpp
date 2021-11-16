#include<bits/stdc++.h>
using namespace std;
int n,dp[1010][1010];
char a[1010];
int play(int l,int r){
    if(l>=r) return 0;
    else if(dp[l][r]!=-1) return dp[l][r];
    else if(a[l]==a[r]) return  dp[l][r] = 1+play(l+1,r-1);
    else{
        for(int i=l;i<r;i++){
            dp[l][r]=max(dp[l][r],play(l,i)+play(i+1,r));
        }
        return dp[l][r];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << play(0,n-1);
    return 0;
}