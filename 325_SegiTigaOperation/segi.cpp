#include<bits/stdc++.h>
using namespace std;
int dp[260][260][4];
int lo[5]={0,1,1,2,2},ro[5]={1,1,2,0,2},lt[3]={0,1,2},rt[3]={0,0,1};
string st;
bool segi(int l,int r,int s){
    if(l==r) return dp[l][r][s]=(st[l]==(s+'0'));
    if(dp[l][r][s]!=-1) return dp[l][r][s];
    if(s==0){
        for(int i=l;i<r;i++)
            if(segi(l,i,0) && segi(i+1,r,2)) return dp[l][r][s]=1;
    }
    else if(s==1){
        for(int i=l;i<r;i++) 
            for(int j=0;j<5;j++)
                if(segi(l,i,lo[j]) && segi(i+1,r,ro[j])) return dp[l][r][s]=1;
    }
    else{
        for(int i=l;i<r;i++)
            for(int j=0;j<3;j++)
                if(segi(l,i,lt[j]) && segi(i+1,r,rt[j])) return dp[l][r][s]=1;
    }
    return dp[l][r][s]=0;
}
int n;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i=0;i<20;i++){
        memset(dp,-1,sizeof(dp));
        cin >> n;
        cin >> st;
        if(segi(0,n-1,0)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}