#include<bits/stdc++.h>
using namespace std;
int n,dp[1000100],a[1000100];
int magic(int x,int j){
    if(x>=n) return 9999999;
    if(x==n-1){ return 0;}
    else if(dp[x]) return dp[x];
    else{
        int o=999999;
        if(j+a[x]!=0) int o=magic(x+j+a[x],0);
        int l=magic(x+1,j+a[x+1]);
        int c=magic(x+1,j);
        cout << o << l << c << '\n';
        return dp[x]=min({o,l,c})+1;
    }
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << magic(0,0);
}
