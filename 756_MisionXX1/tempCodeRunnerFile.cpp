#include<bits/stdc++.h>
using namespace std;
int dp[50100][110],a[100000],k,n,cnt,t,total=0;
int pump(int id,int combo){
    if(combo-1>k) return 9999999;
    else if(id==cnt){
        if(t==1 && combo-1==k) return 1;
        return 0;
    }
    else if(dp[id][combo]) return dp[id][combo];
    else{
            return dp[id][combo]=min(pump(id+1,combo+a[id]),pump(id+1,a[id])+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> t;
        total+=t;
        if(t==1){
            a[cnt]=total;
            total=0;
            cnt++;
        }
    }   
    if(total!=0){
        a[cnt]=total; cnt++;
    }
    if(a[cnt-1]==1)a[cnt-1]+=1;
    int ans=pump(0,0);
    cout << ans;
    return 0;
}