#include<bits/stdc++.h>
using namespace std;
struct node{
    int n,op,cl,fr;
};
int n,s,t,tx,ty,cn,cop,ccl,chw,cnt=0,cfr,hwop[100100],hwcl[100100];
vector<int> v[100100],high;
string p;
queue<node> q;
node c;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s >> t;
    for(int i=0;i<n-1;i++){
        cin >> tx >> ty;
        v[tx].push_back(ty);
        v[ty].push_back(tx);
    }
    cin >> p;
    if(p[t-1]=='('){
        cout << -1; return 0;
    }
    else{
        q.push({t,0,1,0});
    }
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(c.op>c.cl)
            continue; 
        high.push_back(c.n);
        hwop[c.n]=c.op;
        hwcl[c.n]=c.cl;
        for(auto e:v[c.n]){
            if(e!=c.fr){
                if(p[e-1]=='(') q.push({e,c.op+1,c.cl,c.n});
                else q.push({e,c.op,c.cl+1,c.n});
            }
        }
    }
    while(!q.empty()) q.pop();
    if(p[s-1]=='(') q.push({s,1,0,0});
    else{
        cout << -1; return 0;
    }
    cnt=0;
    while(!q.empty()){
        cn=q.front().n;
        cop=q.front().op;
        ccl=q.front().cl;
        cfr=q.front().fr;
        q.pop();
        if(cop<ccl || cop+ccl>n-1) continue;
        for(auto e:v[cn]){
            if(e!=cfr){
                if(p[e-1]=='(') q.push({e,cop+1,ccl,cn});
                else q.push({e,cop,ccl+1,cn});
            }
        } 
        for(auto e:high){
            if(cop+hwop[e]==ccl+hwcl[e]){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
