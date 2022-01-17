#include<bits/stdc++.h>
using namespace std;
int a[100100],n,l,r,idx=0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> l >> r;
    if(l>r) swap(l,r);
    sort(a,a+n);
    int mx=-1;
    for(int i=0;i<n-1;i++){
        int m=a[i]+(a[i+1]-a[i])/2;
        if(m<l) continue;
        if(m>r) continue;
        if(mx<(a[i+1]-a[i])/2){
            mx=(a[i+1]-a[i])/2;
            idx=m;
        }
    }
    cout << idx;    
    return 0;
}