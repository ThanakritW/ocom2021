#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct mole{
    ll t,s;
    bool friend operator<(mole a,mole b){
        if(a.t==b.t){
            return a.s>b.s;
        }
        return a.t>b.t;
    }
};
ll n,s,ts,tt,mx,cnt[1000010];
vector<mole> v;
int main(){
    bool case1=1;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        cin >> ts >> tt;
        v.push_back({tt,ts});
        if(i!=0 && case1){
            if(abs(ts-v[i-1].s)>(tt-v[i-1].t) || tt<v[i-1].t){
                case1=false;
            }
        }
    }
    if(case1){
        cout << "no";
        for(int i=0;i<n;i++){
            if(abs(s-v[i].s)<=v[i].t){
                cout << n-i;
                return 0;
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cnt[i]=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].t-v[j].t>=abs(v[i].s-v[j].s)){
                cnt[j]=max(cnt[j],cnt[i]+1);
            }
        }
    }
    mx=-1;
    for(int i=0;i<n;i++){
        if(abs(s-v[i].s)<=v[i].t){
            mx=max(mx,cnt[i]);
        }
    }
    cout << mx;
}