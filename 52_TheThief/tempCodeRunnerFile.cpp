#include<bits/stdc++.h>
using namespace std;
int q,n,r,k;
int main(){
    cin >> q;
    for(int j=0;j<q;j++){
        cin >> n >> r >> k;
        bool crack=0;
        for(int i=0;i<n;i++){
            //cout << r << ' ';
            if(r>0 && r<=k){
                if(n-i!=2) crack=1;
                else if(n-i==2 && r<k) crack=1;
                else crack=0;
                break;
            }
            if(r>k){
                r=k-r;
            }else r=1-r;
        }
        if(crack) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}