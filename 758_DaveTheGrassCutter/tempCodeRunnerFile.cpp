#include<bits/stdc++.h>
using namespace std;
int r[100100],tx,ty,pos,n,m;
char axis;
set<pair<int,int>> sx,sy;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> r[i];
    }
    for(int i=0;i<n;i++){
        cin >> tx >> ty;
        sx.insert({tx,ty});
        sy.insert({ty,tx});
    }
    for(int i=0;i<m;i++){
        cin >> axis >> pos;
        if(axis=='x'){
            auto itu=sx.upper_bound({pos+r[i]+1,0});
            auto itl=sx.lower_bound({pos-r[i],0});
            vector<pair<int,int>> v;
            int cnt=0;
            while(itl!=itu){
                v.push_back({itl->first,itl->second});
                cnt++;
                itl++;
            }
            for(auto e:v){
                sx.erase({e.first,e.second});
                sy.erase({e.second,e.first});
            }
            n-=cnt;
            cout << n << '\n';
        }
        else{
            auto itu=sy.upper_bound({pos+r[i]+1,0});
            auto itl=sy.lower_bound({pos-r[i],0});
            vector<pair<int,int>> v;
            int cnt=0;
            while(itl!=itu){
                v.push_back({itl->first,itl->second});
                cnt++;
                itl++;
            }
            for(auto e:v){
                sy.erase({e.first,e.second});
                sx.erase({e.second,e.first});
            }
            n-=cnt;
            cout << n << '\n';
        }
    }
    return 0;
}