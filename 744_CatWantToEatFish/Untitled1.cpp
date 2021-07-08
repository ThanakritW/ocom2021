#include<bits/stdc++.h>
using namespace std;
long long a[1000100],l=0,total=0,mn=LLONG_MAX,n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
        total+=a[i];
        if(total>=k){
            while(total>=k && l<i){
                total-=a[l];
                l++;
            }
            mn=min(mn,i-l+2);
        }
    }
    cout << mn;
    return 0;
}
