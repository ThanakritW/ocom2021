#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second
priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> q;
vector<pair<long long,long long>> v[60];
long long n,c,w[60];
char a,b;
pair<long long,long long> cn;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a>'a') a-=6;
        if(b>'a') b-=6;
        v[a-'A'].push_back({b-'A',c});
        v[b-'A'].push_back({a-'A',c});
    }
    for(int i=0;i<52;i++){
        w[i]=INT_MAX;
    }
    w[25]=0;
    q.push({0,25});
    while(!q.empty()){
        cn=q.top();
        q.pop();
        if(cn.y < 25){
            cout << (char)(cn.y+'A') << " " << cn.x;
            return 0;
        }
        else{
            for(auto e:v[cn.y]){
                if(w[e.x]>cn.x+e.y){
                    w[e.x]=cn.x+e.y;
                    q.push({w[e.x],e.x});
                }
            }
        }
    }
    return 0;
}