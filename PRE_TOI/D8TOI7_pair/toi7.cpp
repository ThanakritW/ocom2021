#include<bits/stdc++.h>
#define pii pair<long long,long long>
#define a first
#define b second
using namespace std;
vector<pii> v;
long long ta,tb,ans=0;
int n;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        v.push_back({ta,tb});
    }
    sort(v.begin(),v.end(),greater<pii>());
    for(int i=0;i<n;i++){
        if(v[i].a==v[i+1].a) continue;
        for(int j=i+1;j<n;j++){
            if(v[i].b < v[j].b){
                ans+=v[i].a+v[j].a;
            }
        }
    }
    cout << ans;
}