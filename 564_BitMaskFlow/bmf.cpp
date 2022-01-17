#include<bits/stdc++.h>
using namespace std;
int dp[10];
void orf(int x){
    for(int i=0;i<10;i++){
        if((x&1)==1) dp[i]=1;
        x=x>>1;
    }
}
void andf(int x){
    for(int i=0;i<10;i++){
        if((x&1)==0) dp[i]=0;
        x=x>>1;
    }
}
void xorf(int x){
    for(int i=0;i<10;i++){
        if((x&1)==1){
            if(dp[i]==0) dp[i]=1;
            else if(dp[i]==1) dp[i]=0;
            else if(dp[i]==2) dp[i]=3;
            else if(dp[i]==3) dp[i]=2;
        }    
        x=x>>1;
    }
}
int n,t,xorn,andn,orn;
char op;
int main(){
    cin >> n;
    for(int i=0;i<10;i++) dp[i]=2;
    for(int i=0;i<n;i++){
        cin >> op >> t;
        if(op=='|') orf(t);
        else if(op=='&') andf(t);
        else xorf(t);
    }
    for(int i=9;i>=0;i--){
        //cout << dp[i];
        if(dp[i]==3){
            xorn+=1<<(i);
        }
        else if(dp[i]==1){
            orn+=1<<(i);
        }
        else if(dp[i]==0){
            andn+=1<<(i);
        } 
    }
    // cout << '\n';
    int ans=0;
    if(xorn) ans++;
    if(orn) ans++;
    if(andn) ans++;
    cout << ans << '\n';
    if(xorn) cout  << "^ " << xorn << '\n';
    if(orn) cout << "| " << orn << '\n';
    if(andn){
        cout << "& ";
        ans=0;
        for(int i=0;i<10;i++){
            if((andn&1)==0) ans+=1<<(i);
            andn=andn>>1;
        }
        cout << ans;
    }
}
