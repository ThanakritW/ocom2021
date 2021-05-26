#include<bits/stdc++.h>
using namespace std;
long n,q,temp,f[1010],l,r,ans[1010];
main(){
    cin >> n >> q;
    f[0]=0;
    for(int i=1;i<=n;i++){
        cin >> temp;
        f[i]=temp+f[i-1];
    }
    for(int i=0;i<q;i++){
        cin >> l >> r;
        ans[i]=f[r]-f[l-1];
    }
    for(int i=0;i<q;i++){
        cout << ans[i] << "\n";
    }
}
