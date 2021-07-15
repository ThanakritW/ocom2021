#include<bits/stdc++.h>
using namespace std;
int dp[10100][110],a[100000],k,n;
int pump(int id,int combo){
    if(combo>k) return 9999999;
    else if(id==n) return 0;
    else if(dp[id][combo]) return dp[id][combo];
    else{
        if(a[id]==1){
            return dp[id][combo]=min(pump(id+1,combo+a[id]),pump(id+1,0)+1);
        }
        else{
            return dp[id][combo]=pump(id+1,combo+a[id]);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << pump(0,0);
    return 0;
}