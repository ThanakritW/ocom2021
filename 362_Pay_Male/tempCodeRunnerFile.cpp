#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll q,t[3],total,dp[110][110][110][5];
ll pay(ll a,ll b,ll c,ll s){
    if(a==0 && b==0 && c==0) return 1;
    if(dp[a][b][c][s]!=-1) return dp[a][b][c][s];
    dp[a][b][c][s]=0;
    if(s!=1 && a>0) dp[a][b][c][s]+=pay(a-1,b,c,1);
    if(s!=2 && b>0) dp[a][b][c][s]+=pay(a,b-1,c,2);
    if(s!=3 && c>0) dp[a][b][c][s]+=pay(a,b,c-1,3);
    return dp[a][b][c][s];
}
ll a,b,c;
int main(){
    cin >> q;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){cin >> t[j];}
        sort(t,t+3);
        a=t[0];
        b=t[1];
        c=t[2];
        cout << pay(a,b,c,0);
    }
    return 0;
}
