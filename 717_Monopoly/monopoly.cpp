#include<bits/stdc++.h>
using namespace std;
int n,dp[1000100],a[1000100];
int magic(int x){
    if(x>n-1) return 99999;
    if(x==n-1) return 0;
    if(dp[x]) return dp[x];
    else{
        return dp[x]=1+min(magic(x+1),magic(x+a[x]));
    }
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << magic(0);
}
