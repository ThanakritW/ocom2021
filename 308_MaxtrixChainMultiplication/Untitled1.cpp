#include<bits/stdc++.h>
using namespace std;
long long dp[110][110],n,a[110];
long long mcm(int l,int r){
        if(dp[l][r]) return dp[l][r];
        if(l==r) {return 0;}
        else{
            long long mn=INT_MAX;
            for(int i=l;i<r;i++){
                mn=min(mn,mcm(l,i)+mcm(i+1,r)+a[l-1]*a[i]*a[r]);
            }
            return dp[l][r]=mn;
        }
}
int main(){
    cin >> n;
    for(int i=0;i<=n;i++){
        cin >> a[i];
    }
    cout << mcm(1,n);
    return 0;
}
