#include<bits/stdc++.h>
using namespace std;
vector<int> v,c;
vector<int>::iterator it;
int n,m,t,ans;
main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        c.push_back(i);
    }
    for(int i=0;i<m;i++){
        ans=0;
        for(int j=0;j<n;j++){
            cin >> t;
            for(int j=0;j<n;j++){
                for(it=c.begin();it!=c.end();it++){
                    if(v[j]==*it){
                       c.erase(it);
                       t=1;
                       for(int k=1;k<n-j;k++){
                            t*=k;
                       }
                       ans+=t*((it-c.begin()));
                       break;
                    }
                }
            }
            cout << ans+1 << '\n';
            v.clear();
        }
    }

}
