#include<bits/stdc++.h>
using namespace std;
bool ls(string x,string y){
    int i=0;int j=0;
    while(1){
        if(x[i]!=y[j]){
            return x[i]<y[j];
        }
        i++;j++;
    }
}
int cmp(string x,string y){
    string a=x;
    string b=y;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    while(a[i]<'a'){i++;}
    while(b[j]<'a'){j++;}
    if(a[i]<'a' || b[i]<'a') return a[i]<b[j];
    while(i<a.size() || j<b.size()){
        if(a[i]!=b[j]){
            return a[i]<b[j];
        }
        i++;
        j++;
        if(i==a.size()&&j!=b.size()) return false;
        if(i!=a.size()&&j==b.size()) return true;
    }
    return ls(x,y);
}
int n;
string s[10010];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << s[i];
        if(i!=n-1) cout << '\n';
    }
}
