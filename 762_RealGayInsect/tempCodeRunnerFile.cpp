#include<bits/stdc++.h>
#define ll long long
#define n first
#define s second
#define lfor(i,n) for(ll i=0;i<n;i++)
using namespace std;
vector<ll> v[100010][5];
bool gf;
ll q,n,m,f[100010],ta,tb;
stack<pair<ll,ll>> s;
pair<ll,ll> c;
int main(){
    cin >> q;
    lfor(i,q){
        cin >> n >> m;
        lfor(j,n){
            f[j]=0;
        }
        
        lfor(j,m){
            cin >> ta >> tb;
            v[ta][i].push_back(tb);
            v[tb][i].push_back(ta); 
        }
        lfor(j,n){
            if(f[j]==0){
                while(!s.empty()) s.pop();
                f[j]=1;
                s.push({j,1});
                while(!s.empty()){
                    c=s.top();s.pop();
                    gf=0;
                    for(auto e:v[c.n][i]){
                        if(f[e]==0){
                            f[e]=-c.s;
                            s.push({e,-c.s});
                        }else if(f[e]==-c.s) continue;
                        else{
                            gf=1;break;
                        }
                    }
                    if(gf) break;
                }
                if(gf)break;
            }
        }
        if(gf) cout << "Gay found!\n";
        else cout << "Gay not found!\n";
    }
    return 0;
}