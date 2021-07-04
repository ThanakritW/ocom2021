#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100100],cnt=0,total;
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cnt=0;
    for(int i=0;i<n;i++){
        total=a[i];
        if(a[i]>=k) cnt++;
        for(int j=i+1;j<n;j++){
            total+=a[j];
            if(total >= k){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
