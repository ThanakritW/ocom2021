#include<bits/stdc++.h>
using namespace std;
int n,m,i;
vector<int> v;
main(){
    cin >> n >> m;
    for(i=0;i<n;i++){
        v.push_back(i+1);
    }
    i=0;
    m--;
    while(!v.empty()){
        i+=m;
        while(i>=v.size()){
            i-=v.size();
        }
        cout << v[i] << " ";
        v.erase(v.begin()+i);
    }
}
