#include<bits/stdc++.h>
using namespace std;
int dp[10100][100],a[10010],k,n;
int pump(int x,int c){
    if(c>k) return 100100;
    else if(x==n) return 0;
    else if(dp[x][c]) return dp[x][c];
    else{
        int b,d;
        if(a[x]==1){
            b=1+pump(x+1,0);
        }
        else b=100100;
            d=pump(x+1,c+a[x]);
        return dp[x][c]=min(b,d);
    }

}
main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << pump(0,0);
}
