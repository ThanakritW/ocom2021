#include<bits/stdc++.h>
using namespace std;
int m,n,k,a[1010][1010],t,mx,b[1010][1010];
main(){
    cin >> m >> n;
    cin >> k;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> t;
            a[i][j]=a[i][j-1]+t;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=k;j<=n;j++){
            b[i][j]=a[i][j]-a[i][j-k];
        }
    }
    for(int j=k;j<=n;j++){
        for(int i=1;i<=m;i++){
            a[i][j]=b[i][j]+a[i-1][j];
        }
    }
    mx=0;
    for(int j=k;j<=n;j++){
        for(int i=k;i<=m;i++){
            mx=max(mx,a[i][j]-a[i-k][j]);
        }
    }
    cout << mx;
}
