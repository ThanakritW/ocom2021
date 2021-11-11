#include<bits/stdc++.h>
using namespace std;
int t,q,n,x,y,a[1010][1010],b[1010],ans;
vector<pair<int,int>> v;
map<vector<pair<int,int>>,int> m;
int main(){
    cin >> t >> q;
    for(int k=0;k<t;k++){
        v.clear();
        cin >> n;
        for(int i=0;i<n-1;i++){
            cin >> x >> y;
            if(x<y)
                v.push_back({x,y});
            else
                v.push_back({y,x});
        }
        sort(v.begin(),v.end());
        m[v]++;
    }
    for(int k=0;k<q;k++){
        v.clear();
        cin >> n;
        for(int i=0;i<n-1;i++){
            cin >> x >> y;
            if(x<y)
                v.push_back({x,y});
            else
                v.push_back({y,x});
        }
        sort(v.begin(),v.end());
        ans=0;
        cout << m[v] << '\n';
    }
    return 0;
}