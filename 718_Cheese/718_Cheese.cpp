#include<bits/stdc++.h>
using namespace std;
int dp[10010][110],a[10010];
int n,ng;
int take(int v,int g){
    if(dp[v][g]) return dp[v][g];
    if(v>=n) return 0;
    else{
        int x,y,z;
        x=take(v+2,g)+a[v];
        if(g>0)
            y=take(v+1,g-1)+a[v];
        else y=-1;
        z=take(v+1,g);
        return dp[v][g]=max({x,y,z});
    }
}
main(){
    cin >> n >> ng;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << take(0,ng);
}
