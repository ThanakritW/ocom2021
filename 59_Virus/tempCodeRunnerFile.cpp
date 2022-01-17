#include<bits/stdc++.h>
using namespace std;
int n,a[100100],b[100100],mx=0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        mx=max(mx,min(a[i],b[i]));
    }
    return 0;
}