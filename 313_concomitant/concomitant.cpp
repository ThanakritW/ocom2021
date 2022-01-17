#include<bits/stdc++.h>
using namespace std;
int a,b,c,dp[8][8][8][8][8][8];
int recur(int open1, int close1,int open2,int close2,int open3,int close3){
    if(open1==a && close1==a && open2==b && close2==b && open3==c && close3==c){
        return 1;
    }
    if(dp[open1][close1][open2][close2][open3][close3]) return dp[open1][close1][open2][close2][open3][close3];
    else{
        if(open1<a){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1+1,close1,open2,close2,open3,close3);
        }
        if(close1<open1){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1,close1+1,open2,close2,open3,close3);
        }
        if(open2<b){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1,close1,open2+1,close2,open3,close3);
        }
        if(close2<open2){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1,close1,open2,close2+1,open3,close3);
        }
        if(open3<c){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1,close1,open2,close2,open3+1,close3);
        }
        if(close3<open3){
            dp[open1][close1][open2][close2][open3][close3]+=recur(open1,close1,open2,close2,open3,close3+1);
        }
        return dp[open1][close1][open2][close2][open3][close3];
    }

}
int main(){
    cin >> a >> b >> c;
    int cnt=0;
    if(a) cnt++;
    if(b) cnt++;
    if(c) cnt++;
    cout << recur(0,0,0,0,0,0)/cnt;
    return 0;
}
