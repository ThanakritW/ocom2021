#include<bits/stdc++.h>
using namespace std;
int dp[110][110],n,x[110];
int pick(int l,int u){
    if(l>u) return 0;
    else if(dp[l][u]) return dp[l][u];
    else{
        int a=x[u]+pick(l+1,u-1);
        int c=x[u]+pick(l,u-2);
        int d=x[l]+pick(l+1,u-1);
        int b=x[l]+pick(l+2,u);
        return dp[l][u]=max({a,b,c,d});
    }
}
main(){
    cin >> n;
    n*=2;
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    cout << pick(0,n-1);
}
