#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll temp,total=0,n;
vector<ll> v;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp; v.push_back(temp);
    }
    sort(v.begin(),v.end());
    ll cnt=0;
    ll free=0;
    for(int i=0;i<n-free;i++){
        total+=v[i];
        if(++cnt==2){
            free+=2;
            if(n-free+1<=i) break;
            total+=v[n-free+1];
            cnt=0;
        }
    }
    cout << total;
    return 0;
}