#include<bits/stdc++.h>
using namespace std;
int a,b,c;
vector<bool> v;
int main(){
    cin >> a >> b >> c;
    for(int i=0; i<a-b; i++) v.push_back(false);
    for(int i=0;i<b;i++) v.push_back(true);
    while(c>1){
        next_permutation(v.begin(),v.end());
        c--;
    }
    for(int i=0;i<a;i++){
        if(v[i]) cout << i+1 << " "; 
    }
    return 0;
}