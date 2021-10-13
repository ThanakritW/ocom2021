#include<bits/stdc++.h>
using namespace std;
long long a[200100],n,dp[200100];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
        int j=1;
        while(i+j<=n){
            dp[i]=max(dp[i],dp[i+j]+a[i]*j);
            j=j*2;
        }
    }
    cout << dp[0];
    return 0;
}