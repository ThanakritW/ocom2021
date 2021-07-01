#include<bits/stdc++.h>
#define int long long
using namespace std;
int dp[110][110],n;
int lss(int a,int b){
    if(a==0) return 1;
    else if(a<0 || b>a) return 0;
    else if(dp[a][b]) return dp[a][b];
    else{
        return dp[a][b]=lss(a-b,b)+lss(a,b+1);
    }
}
main(){
    cin >> n;
    cout << lss(n,1);
}
