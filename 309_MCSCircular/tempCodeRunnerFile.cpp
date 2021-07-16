#include<bits/stdc++.h>
using namespace std;
long long a[100100],mn,cmn,sum=0,n,ansmx=INT_MIN;
bool f;
int main(){
    cin >> n;
    f=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        if(a[i]>0) f=0;
        ansmx=max(ansmx,a[i]);
    }
    if(f){ cout << ansmx; return 0;}
    mn=INT_MAX;
    cmn=INT_MAX;
    for(int i=0;i<n;i++){
        cmn=min(a[i],cmn+a[i]);
        mn=min(mn,cmn);
    }
    cout << sum-mn;
    return 0;
}
