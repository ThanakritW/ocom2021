#include<bits/stdc++.h>
using namespace std;
long long dp[1000100];
int hotel(int n){
    if(n<=0) return 0;
    if(dp[n]) return dp[n];
    int mn=INT_MAX;
    mn=min(mn,3000+hotel(n-15));
    mn=min(mn,1500+hotel(n-5));
    mn=min(mn,800+hotel(n-2));
    mn=min(mn,500+hotel(n-1));
    return dp[n]=mn;
}
int n;
int main(){
    cin >> n;
    cout << hotel(n);
    return 0;
}