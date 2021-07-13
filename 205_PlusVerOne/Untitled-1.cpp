#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,t,ans=0;
int main(){
    cin >> n >> m;
    cin >> x >> y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> t;
            if(j==y || i==x) ans+=t;
        }
    }
    cout << ans;
    return 0;
}