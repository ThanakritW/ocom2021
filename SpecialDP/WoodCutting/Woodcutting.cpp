#include<bits/stdc++.h>
using namespace std;
int dp[10000],n,k;
pair<int,int> wood[10000];
int cut(int x){
    if(x==0) return 0;
    if(dp[x]) return dp[x];
    else{
        for(int i=0;i<n;i++){
            if(x>=wood[i].first){
                dp[x]=max(dp[x],wood[i].second+cut(x-wood[i].first));
            }
            else break;
        }
        return dp[x];
    }    
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> wood[i].first >> wood[i].second;
    }
    sort(wood,wood+n);
    cout << cut(k);
    return 0;
}