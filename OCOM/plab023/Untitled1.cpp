/*
TASK: PLAB023 , 752
LANG: C++
AUTHOR: THANAKRIT WONG-ASA
CENTER: KKU022
*/
#include<bits/stdc++.h>
using namespace std;
struct day{
    int total,d;
};
struct ques{
    int ask,in;
};
bool cmp1(const pair<int,int> &a, const pair<int,int> &b){
    if(a.first==b.first) return a.second<b.second;
    else return a.first<b.first;
}
bool cmp2(const pair<int,int> &a, const pair<int,int>  &b){
    return a.second<b.second;
}
int n,m,temp,f,mx=-INT_MAX,cur=0,cnt=0;
vector<pair<int,int>> v;
vector<pair<int,int>> q;
main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> temp;
        cur +=temp;
        if(cur>0 && cur>mx){
            v.push_back({cur,i});
            mx=cur;
        }
    }
    for(int i=0;i<m;i++){
        cin >> temp;
        q.push_back({temp,i});
    }
    v.push_back({INT_MAX,-1});
    sort(q.begin(),q.end(),cmp1);
        for(int i=0;i<v.size();i++){
            while(v[i].first>=q[cnt].first && cnt<q.size()){
                q[cnt].first=v[i].second;
                cnt++;
            }
        }
    sort(q.begin(),q.end(),cmp2);
    for(auto e:q) cout << e.first << '\n';
}
