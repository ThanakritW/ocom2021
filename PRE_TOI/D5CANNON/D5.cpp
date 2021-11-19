#include<bits/stdc++.h>
using namespace std;
int a[1000100],n,m,k,l,ans,x;
int *upper,*lower,*lastupper;
int main(){
    cin >> n >> m >> k >> l;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int o=0;o<k;o++){
        ans=0;
        lastupper=a; //ตำแหน่งเริ่มต้นของ array
        for(int i=0;i<m;i++){
            cin >> x;
            lower=lower_bound(lastupper,a+n,x-l);
            upper=upper_bound(lastupper,a+n,x+l);
            ans+=upper-lower;
            lastupper=upper;
        }
        cout << ans << '\n';
    }
    return 0;
}
