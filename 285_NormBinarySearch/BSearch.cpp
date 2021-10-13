#include<bits/stdc++.h>
using namespace std;
int n,q,a[100100],t,l,r,m;
bool cmp(int a,int b){
    if(a>b) return false;
    return true;
}
int main(){
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    // for(int i=0;i<n;i++){
    //     cout << a[i] << " ";
    // }
    // cout << '\n';
    for(int i=0;i<q;i++){
        cin >> t;
        if(t<a[0]){
            cout << "-1\n"; continue;
        }
        l=0;
        r=n;
        while(l<r){
            m=l+(r-l)/2;
            // cout << a[m] << "-";
            if(t>=a[m]){
                l=m+1;
            }
            else{
                r = m;
            }
        }
        while(a[m]>t) m--;
        cout << a[m] << '\n';
    }
    return 0;
}
