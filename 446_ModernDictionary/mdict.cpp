#include<bits/stdc++.h>
using namespace std;
int n,target;
string s[1100],ans;
set<char> sc;
vector<int> v[3000];
int dg[3000];
queue<int> q;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
        for(auto e:s[i]){
            sc.insert(e);
        }
    } 
    for(int i=0;i<30;i++) dg[i]=-1;
    for(auto e:sc) dg[e-'a']=0;
    for(int i=0;i<n-1;i++){ 
        int j=0;
        while(s[i][j]==s[i+1][j] && j<s[i].size() && j<s[i+1].size()) j++;
        if(j>=s[i].size()||j>=s[i+1].size()) continue;
        v[s[i][j]-'a'].push_back(s[i+1][j]-'a');
        dg[s[i+1][j]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(dg[i]==0) q.push(i);
    }
    while(!q.empty()){
        // cout << char(q.front()+'a');
        if(q.size()>1){
            cout << "?";
            return 0;
        }else{
            ans+=(char)(q.front()+'a');
            for(auto e:v[q.front()]){
                if(--dg[e]==0) q.push(e);
            }
        }
        q.pop();
    }
    for(int i=0;i<26;i++){
        if(dg[i]>0){ 
            cout << "!"; return 0;
        }
    }
    cout << ans;
    return 0;
}