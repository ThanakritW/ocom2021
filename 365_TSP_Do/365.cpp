#include<bits/stdc++.h>
using namespace std;
int a[1510][1510],dp[1510][1510],n;
int travel(int start,int end){
    if(start==n-1 || end==n-1) return 0;
    if(dp[start][end]!=-1) return dp[start][end];
    int nxt=max(start,end)+1;
    return dp[start][end]=dp[end][start]=min(a[nxt][start]+travel(nxt,end),a[end][nxt]+travel(start,nxt));
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout << travel(0,0);

}