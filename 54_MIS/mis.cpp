#include <bits/stdc++.h>
using namespace std;
long long n,a[100100];
vector<long long> v;
int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]<=v[v.size()-1]){
            auto e=lower_bound(v.begin(),v.end(),a[i]);
            v[e-v.begin()]=a[i];    
        }else v.push_back(a[i]);
    }
    cout << v.size();
}