#include<bits/stdc++.h>
using namespace std;
long long n,m,a[123480],b[123480],c,d,ans=0;
main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    c=0; d=0;
    while(c<n && d<m){
        if(a[c]<b[d]){
            ans+=a[c]*(m-d);
            c++;
        }
        else{
            ans+=b[d]*(n-c);
            d++;
        }
    }
    cout << ans;
}
