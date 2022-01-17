#include <bits/stdc++.h>
using namespace std;
int dp[300][300];
int n;
int parent(int open, int close){
    if(open==n && close==n){
        return 1;
    } 
    if(dp[open][close]) return dp[open][close];
    else{
        if(open<n){
            dp[open][close]+=parent(open+1, close);
        }
        if(close<open){
            dp[open][close]+=parent(open, close+1);
        }
        return dp[open][close];
    }
       
}
int main() {
    cin >> n;
    cout << parent(0,0);
    return 0;
}