#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100100][4],t,q;
ll kuth(int x,int c){
    if(x<5) return 1;
    if(dp[x][c])return dp[x][c];
    if(x>=50 && c==3) dp[x][c]+=kuth(x-50,3);
    if(x>=25 && c>=2) dp[x][c]+=kuth(x-25,2);
    if(x>=10 && c>=1) dp[x][c]+=kuth(x-10,1);
    return dp[x][c]=(dp[x][c]+kuth(x-5,0)+1)%1000003;
}
int main(){
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> t;
        cout << kuth(t,3) << '\n';
    }
    return 0;
}