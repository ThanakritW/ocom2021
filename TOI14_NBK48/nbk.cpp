#include<bits/stdc++.h>
using namespace std;
int n,q,qs[100100],t,mn,money,ans[100100];
vector<pair<int,int>> tp,qu;
int main(){
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> t;
        qs[i]=qs[i-1]+t;
    }
    mn=INT_MAX;
    for(int i=n;i>0;i--){
        if(qs[i]>mn) continue;
        tp.push_back({qs[i],i});
        mn=qs[i];
    }
    tp.push_back({0,0});
    for(int i=0;i<q;i++){
        cin >> money;
        qu.push_back({money,i});
    }
    int qn=0;
    for(int j=tp.size()-1;j>=0;j++){
        while(qu[qn]>tp[j]){
            ans[qu[qn].second]=tp[j].second;
            qn++;
        }
    }
    return 0;
}