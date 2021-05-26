#include<bits/stdc++.h>
using namespace std;
long n,a[10010],ans=1;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(ans<a[i]){
            break;
        }
        ans+=a[i];
    }
    cout << ans;
}
