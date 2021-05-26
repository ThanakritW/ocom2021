#include<bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
struct s{
    int a,b;
    s(int x,int y){
        a=x;
        b=y;
    }
};
bool cmp(s a, s b){
    if(a.a==b.a) return a.b<b.b;
    else return a.a<b.a;
}
main(){
    vector<s> v{{10,1},{20,2},{30,3},{40,4},{50,5},{60,6},{70,7}};
    int a1,a2;
    cin >> a1 >> a2;
    s x={a1,a2};
    bool r=binary_search(v.begin(),v.end(),x,cmp);
    if(r) cout << "Found it!";
    else cout << "Value not found";
}
