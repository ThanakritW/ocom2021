#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000100],l,r,mid,total,mx=0;
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>mx) mx=a[i];
    }
    l=0;
    r=mx*m;
    while(l<r){
        mid=l+((r-l)/2);
        total=0;
        for(int i=0;i<n;i++){
            total+=mid/a[i];
        }
        if(total<m) l=mid+1;
        else r=mid;
    }
    cout << l;
    return 0;
}