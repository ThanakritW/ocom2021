#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,dp[50][2];
int mate(int x, int s){
    if(x==n){return 1;}
    if(dp[x][s]) return dp[x][s];
    int m=0;
    if(s==1){
        m+=mate(x+1,0);
        m+=mate(x+1,1);
        return dp[x][s]=m+1;
    }else{
        m+=3*mate(x+1,0);
        return dp[x][s]=m+1;
    }
}
main(){
    cin >> n;
    cout << mate(0,1);
}
