#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,t,k[2000010],mx,ans=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    mx=0;
    for(int i=0;i<n;i++){
        cin >> t;
        mx=max(mx,t);
        for(int i=1;i<=sqrt(t);i++){
            if(t%i==0){
                k[i]++;
                if(i!=t/i) k[t/i]++;
            }
        }
    }
    for(int i=1;i<=mx;i++){
        if(k[i]!=1)
        ans=max(ans,i*k[i]);
    }
    cout << ans;
    return 0;
}