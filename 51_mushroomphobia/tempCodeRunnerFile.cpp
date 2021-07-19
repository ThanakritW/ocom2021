#include<bits/stdc++.h>
using namespace std;
multiset<long long> s;
long long n,l,h,t,x,y,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> l >> h;
    for(int k=0;k<n;k++){
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> t;
            s.insert(t);
        }
        cin >> x >> y;
        x=l+ceil((float)x*(float)((float)h/(float)y));
        s.erase(s.lower_bound(x),s.end());
        cout << s.size() << '\n';
    }
    return 0;
}