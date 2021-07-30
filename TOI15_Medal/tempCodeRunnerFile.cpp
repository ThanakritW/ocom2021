#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int n,a[1000100],b[1000100],t;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n,cmp);
    for(int i=0;i<n;i++){
        a[i]+=b[i];
    }
    int ans=0;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        ans+=abs(a[i]-a[i+1]);
    }
    cout << ans;
    return 0;
}