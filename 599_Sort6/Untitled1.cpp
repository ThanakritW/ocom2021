#include<bits/stdc++.h>
using namespace std;
long n,ta,tb;
struct p{
    int a,b;
    bool friend operator<(p a,p b){
        if(a.a==b.a) return a.b>b.b;
        return a.a<b.a;
    }
};
vector<p> v;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        v.push_back({ta,tb});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i].a << ' ' << v[i].b << '\n';
    }
}
