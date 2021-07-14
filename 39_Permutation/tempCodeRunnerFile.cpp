#include<bits/stdc++.h>
using namespace std;
int a,b,c;
vector<int> v;
int main(){
    cin >> a >> b >> c;
    for(int i=1; i<=a; i++){
        v.push_back(i);
    }
    while(next_permutation(v.begin(),v.end()) && c>1){
        c--;
    }
    for(int i=0;i<b;i++){
        cout << v[i] << " ";
    }
    return 0;
}