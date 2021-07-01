#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
    int n,w;
};
int mn=INT_MAX;
bool f[510];
vector<node> v[510];
node dfs(int n,int w,int fr){
    if(f[n]==1){
        return {w,n};
    }
    f[n]=1;
    if(v[n].size()==0) return {-1,0};
    node k;
    int cmn=INT_MAX,hn=0;
    for(auto e:v[n]){
        if(e.n!=fr){
            k=dfs(e.n,e.w,n);
            if(k.w==n){
            mn=min(mn,k.n);
            }
            else if(k.n>-1){
               if(cmn>k.n){
                    cmn=k.n;
                    hn=k.w;
               }
            }
        }
    }
    f[n]=0;
    return {w+cmn,hn};
}
int n,m,ta,tb,tc;
main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc});
    }
//    for(int i=0;i<n;i++){
//        mn=INT_MAX;
        node t=dfs(1,0,1);
        cout << mn;
//    }
}
