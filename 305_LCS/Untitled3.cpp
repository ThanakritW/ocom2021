#include<bits/stdc++.h>
using namespace std;
string a,b;
int dp[510][510];
int lcs(int u,int l){
    if(u<0 || l<0) return 0;
    else if(dp[u][l]) return dp[u][l];
    else{
        if(a[u]==b[l]){
            return dp[u][l]=lcs(u-1,l-1)+1;
        }
        else{
            return dp[u][l]=max(lcs(u-1,l),lcs(u,l-1));
        }
    }
}
main(){
    cin >> a >>b;
    cout << lcs(a.size()-1,b.size()-1);
}
