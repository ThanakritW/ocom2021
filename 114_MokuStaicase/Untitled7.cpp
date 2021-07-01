#include<bits/stdc++.h>
#define int long long
using namespace std;
int dp[510][510],n;
int lss(int a,int b,int c){
    if(a==0 && c>1) return 1;
    else if(a<0 || b>a) return 0;
    else if(dp[a][b]) return dp[a][b];
    else{
        return dp[a][b]=lss(a-b,b+1,c+1)+lss(a,b+1,c);
    }
}
main(){
    cin >> n;
    cout << lss(n,1,0);
}

