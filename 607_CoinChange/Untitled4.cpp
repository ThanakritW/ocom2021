#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100],mn[1000010];
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=1;i<=m;i++){
        mn[i]=INT_MAX;
    }
    for(int i=1;i<=m;i++){
        for(int j=0;j<n;j++){
            if(i<a[j]) continue;
            else{
                mn[i]=min((mn[i-a[j]]+1),mn[i]);
            }
        }
    }
    cout << mn[m];
    return 0;
}
