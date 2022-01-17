#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,sum,mx,n;
vector<ll> a;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    mx=0;
    for(int i=0;i<n-mx;i++){
        sum=a[i]+a[i+1];
        auto it=lower_bound(a.begin(),a.end(),sum);
        if(mx<(it-a.begin())){
            mx=it-a.begin()-i;
        }
    }
    cout << mx;
    return 0;
}