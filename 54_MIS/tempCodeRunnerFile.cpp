#include<bits/stdc++.h>
using namespace std;
int dp[100100],n,a[100100];
int lis(int x){
    if(x==0) return 1;
    if(dp[x]) return dp[x];
    int mx=0;
    for(int i=0;i<x;i++){
        if(a[i]<a[x])
            mx=max(mx,1+lis(i));
    }
    if(mx==0) return dp[x]=1;   
    else return dp[x]=mx;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << lis(n-1);
}