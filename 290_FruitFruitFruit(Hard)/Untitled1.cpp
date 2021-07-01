#include<bits/stdc++.h>
using namespace std;
int n,m,a[260][260],dp[260][260];
int mx(int x,int y){
    if(x==n-1 && y==m-1){
        return a[n-1][m-1];
    }
    else if(dp[x][y]) return dp[x][y];
    else if(x>n-1 || y>m-1) return 0;
    else return dp[x][y]=a[x][y]+max(mx(x+1,y),mx(x,y+1));
}
main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin >> a[i][j];
        }
    }
    cout << mx(0,0);
}
