#include<bits/stdc++.h>
using namespace std;
#define p pair<long,string>
main(){
    vector<p> v;
    p k;
    long n,a;
    string b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    cin >> a >> b;
    k={a,b};
    cout << binary_search(v.begin(),v.end(),k);
}
