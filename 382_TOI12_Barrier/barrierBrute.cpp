#include<bits/stdc++.h>
using namespace std;
int n,w,a[10010],qs[10010],mx=0,ans=0;
int main(){
    cin >> n >> w;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        qs[i]=a[i]+qs[i-1];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<i+w && j<=n;j++){
            if(mx==qs[j]-qs[i-1]){
                ans=min(ans,j-i+1);
            }
            else if(mx<qs[j]-qs[i-1]){
                mx=qs[j]-qs[i-1];
                ans=j-i+1;
            }
        }
    }
    cout << mx << '\n' << ans;
    return 0;
}