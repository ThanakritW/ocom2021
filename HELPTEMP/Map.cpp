#include<bits/stdc++.h>
using namespace std;
struct bird{
    int id;
    string name;
    string city;
};
map<string,bird> m;
int n,q,b;
string a,c,d;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> a >> b >> c >> d;
        m.insert({a,{b,c,d}});
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a;
        if(m[a].id!=0) cout << a << " " << m[a].id << " " << m[a].name << " " << m[a].city << '\n';
        else cout << "Not Found\n";
    }
}
