#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[100],mn[10010];
main()
{
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
}
