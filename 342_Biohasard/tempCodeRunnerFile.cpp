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
    int mx=0;
    if(l<a[0]){
        mx=a[0]-l;
        idx=l;
    }
    for(int i=0;i<n-1;i++){
        int m=a[i]+(a[i+1]-a[i])/2;
        if(m<l) continue;
        else if(m>r) break;
        else if(mx<(a[i+1]-a[i])/2){
            mx=(a[i+1]-a[i])/2;
            idx=m;
        }
    }
    if(r>a[n-1] && r-a[n-1]>mx){
        mx=r-a[n-1];
        idx=r;
    }
    cout << idx;
    return 0;
}