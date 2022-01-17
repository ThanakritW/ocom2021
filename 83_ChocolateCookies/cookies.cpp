#include<bits/stdc++.h>
using namespace std;
int l,r,ptr,f1[200100],f2[200100],n,cnt=1,m;
string s;
vector<pair<int,int>> v;
void dfs(int lf,int rt){
    int mid=lf+(rt-lf)/2;
    if(f1[mid]==0 || f2[mid]) return;
    else{
        dfs(l,mid-1);
        v.push_back({f1[mid],cnt++});
        dfs(mid+1,r);
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        l=0;
        r=2*n;
        for(int j=0;j<s.size();j++){
            m=l+(r-l)/2;
            if(s[j]=='*'){
                f1[m]=i+1; break;
            }
            else if(s[j]=='L'){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
    }
    dfs(0,2*n);
    sort(v.begin(),v.end());
    for(auto e:v) cout << e.second << '\n';
    return 0;
}
