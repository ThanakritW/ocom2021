#include<bits/stdc++.h>
using namespace std;
int t,n,l,r,a,b;
int main(){
    cin >> t;
    for(int k=0;k<t;k++){
        cin >> n;
        l=-1;
        r=INT_MAX;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            if(a>l){
                l=a;
            }
            if(b<r){
                r=b;
            }
        }
        if(l>r)
            cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}