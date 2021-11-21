#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[500][500][30],dx[1010],dy[1010],dc[1010],n,tx,ty,dp2[500][1000],x;
ll charge(ll x,ll y,ll b){ //10 คะแนน
    if(x>=tx && y>=ty) return 0;
    if(b>=n) return INT_MAX;
    if(dp[x][y][b]) return dp[x][y][b];
    return dp[x][y][b]=min(dc[b]+charge(x+dx[b],y+dy[b],b+1),charge(x,y,b+1));
}
ll charge2(ll x,ll b){ //40 คะแนน
    if(x>=tx) return 0;
    if(b>=n) return INT_MAX;
    if(dp2[x][b]) return dp2[x][b]; 
    return dp2[x][b]=min(dc[b]+charge2(x+dx[b],b+1),charge2(x,b+1));
}
int main(){
    cin >> n >> tx >> ty;
    for(int i=0;i<n;i++){
        cin >> dx[i] >> dy[i] >> dc[i];
    }
    if(n<=20) x=charge(0,0,0);
    else if(ty==0) x=charge2(0,0);
    else return 1;
    if(x==INT_MAX) cout << -1;  
    else cout << x;
}