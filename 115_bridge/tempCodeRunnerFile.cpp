#include<bits/stdc++.h>
using namespace std;

int v[3010],b[3010],j,cnt,amx,bmx,n,ans=0,t,dp[3010][3010];
int build(int x,int d){
    if(x==n) return 0;
    if(b[v[x]]<d) return dp[x][d]=build(x+1,d);
    else return dp[x][d]=max(build(x+1,d),1+build(x+1,v[x]));
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> t;
        b[t]=i;
    }
    cout << build(0,0);
    return 0;
}