#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100100],dp[100100];
int bb(int x){
    if(x>=n) return 0;
    if(dp[x]>0) return dp[x];
    else return dp[x]=max(a[x]+bb(x+2),bb(x+1));
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout <<bb(0);
}
