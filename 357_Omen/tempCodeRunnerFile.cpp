#include<bits/stdc++.h>
using namespace std;
int l,r,cnt=0;
int d[1000000010];
int main(){
    cin >> l >> r; if(l>r) swap(l,r);
    d[1]=1;
    for(int i=2;i<=sqrt(r);i++){
        if(d[i])continue;
        for(int j=2;j*i<=r;j++){ //start at 2 to avoid mark i as not prime number
            d[j*i]=1;
        }
    }
    for(int i=l;i<=r;i++) if(!d[i]) cnt++;
    cout << cnt;
    return 0;
}