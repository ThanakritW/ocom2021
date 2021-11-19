#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
int dp[260][260][3];
int n;
string s;
void rst(int x){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++) 
            for(int k=0;k<3;k++) dp[i][j][k]=-1;
}
pair<int,int> d1[5]={{0,1},{1,1},{1,2},{2,0},{2,2}},d2[3]={{0,0},{1,0},{2,1}};
bool disaster(int l,int r,int t){
    if(l==r)
    return dp[l][r][t]=(s[l]==(t+'0'));
    if(dp[l][r][t]!=-1) return dp[l][r][t];
    if(t==0){
        for(int i=l;i<r;i++){
            if(disaster(l,i,0) && disaster(i+1,r,2)) return dp[l][r][t]=1;
        }
    }
    else if(t==1){
        for(int i=l;i<r;i++){
            for(int j=0;j<5;j++){
                if(disaster(l,i,d1[j].x) && disaster(i+1,r,d1[j].y)) return dp[l][r][t]=1;
            }
        }
    }
    else{
        for(int i=l;i<r;i++){
            for(int j=0;j<3;j++){
                if(disaster(l,i,d2[j].x) && disaster(i+1,r,d2[j].y)) return dp[l][r][t]=1;
            }
        }
    }
    return dp[l][r][t]=0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int l=0;l<20;l++){
        cin >> n >> s;
        rst(n);
        if(disaster(0,n-1,0)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}