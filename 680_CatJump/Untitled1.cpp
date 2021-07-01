#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,dp[110][110][110],a[110][110][110];
int jump(int x,int y,int z){
    if(x>=n || y>=m || z>=k) return 0;
    if(x==n && y==m && z==k){
        if(a[x][y][z]<0) return -a[x][y][z];
        return a[x][y][z];
    }
    if(dp[x][y][z]) return dp[x][y][z];
    if(a[x][y][z]<0) return dp[x][y][z]=max({jump(x,y,z+1),jump(x+1,y,z),jump(x,y+1,z)})-a[x][y][z];
    else return dp[x][y][z]=max(jump(x,y+1,z),jump(x+1,y,z))+a[x][y][z];
}
main(){
    cin >> n >> m >> k;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            for(int x=0;x<m;x++){
                cin >> a[j][x][i];
            }
        }
    }
    cout << jump(0,0,0);
}
