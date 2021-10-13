#include<bits/stdc++.h>
using namespace std;
int n,q,a[100100],t,l,r,m;
bool cmp(int a,int b){
    if(a>b) return false;
    return true;
}
set<int> s;
int main(){
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<q;i++){
        cin >> t;
        if(t<a[0]){
            cout << "-1\n"; continue;
        }
        l=0;
        r=n;
        while(l<r){
            m=l+(r-l)/2;
            if(t>=a[m]){
                l=m+1;
            }
            else{
                r = m;
            }
        }
        while(a[m]>t) m--;
        cout << m << '\n';
    }
    return 0;
}
