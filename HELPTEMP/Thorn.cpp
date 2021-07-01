#include<bits/stdc++.h>
using namespace std;
int m,n,a[10010],dp[101000][1010];
main(){
    cin >> m >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        dp[0][i]=1;
    }
    for(int i=1;i<=m;i++){
        for(int j=0;j<n;j++){
            if(i-a[j]>=0) dp[i][j]+=dp[i-a[j]][j];
            if(j>0) dp[i][j]+=dp[i][j-1];
        }

    }
    cout << dp[m][n-1];
}
