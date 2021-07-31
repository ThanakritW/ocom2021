#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    int av[30]={0},bv[30]={0};
    int t=0,pta=0,ptb=0;
    for(auto e:a){
        if(e>='a' && e<='z'){
        t=e-'a';
        av[t]++;
        }
    }
    for(auto e:b){
        if(e>='a' && e<='z'){
        t=e-'a';
        bv[t]++;
        }
    }
    for(int i=0;i<26;i++){
        if(av[i]!=bv[i]) return av[i]>bv[i];
    }
    return a<b;
}
int n;
string t;
vector<string> v;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto e:v) cout << e << '\n';
    return 0;
}