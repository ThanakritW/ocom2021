#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,m,t,ans,f[15],c[15],tf;
main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        f[i-1]=1;
        for(int j=n-i;j>1;j--){
            f[i-1]*=j;
        }
    }
    for(int i=0;i<m;i++){
        ans=0;
        for(int j=0;j<n;j++){
            cin >> t;
            c[j]=t;
            tf=0;
            for(int k=0;k<j;k++){
                if(t>c[k]){
                    tf++;
                }
            }
            ans+=(t-tf-1)*f[j];
        }
        cout << ans+1 << '\n';
    }
}
