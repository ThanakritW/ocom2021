#include<bits/stdc++.h>
using namespace std;
int mx(string a){
    int cnt[30]={0};
    for(int i=0;i<a.size();i++){
        if(a[i]<'a'){
            a[i]=a[i]-'A'+'a';
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cnt[a[i]-'a']++;
    }
    sort(cnt,cnt+30,greater<int>());
    int i=0,ans=0;
    while(cnt[i]>0){
        ans+=cnt[i]*(26-i);
        i++;
    }
    return ans;
}
int n;
string s;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        cout << mx(s) << '\n';
    }
}
