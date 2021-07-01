#include<bits/stdc++.h>
using namespace std;
vector<int> v[100100];
int q,n,e,gen[100100],ta,tb,p[100100],x,y;
set<int> s;
struct insect{
    int n,g;
};
int fp(int x){
    if(p[x]!=x) p[x]=fp(p[x]);
    return p[x];
}
bool gay(int x){
    queue<insect> q;
    bool f[100100]={0};
    insect c;
    q.push({x,1});
    f[x]=1;
    while(!q.empty()){
        c=q.front();
        q.pop();
        for(auto y:v[c.n]){
            if(gen[y]==c.g){
                return 1;
            }
            else{
                if(!f[y]){
                    q.push({y,-c.g});
                }
            }
        }
    }
    return 0;
}
main(){
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n >> e;
        for(int i=0;i<n;i++) {p[i]=i;v[i].clear();};
        for(int i=0;i<e;i++){
            cin >> ta >> tb;
            edge.push_back({ta,tb});
            v[ta].push_back(tb);
            v[tb].push_back(ta);
        }
        for(int i=0;i<n;i++){
            for(auto e:v[i]){
                if(t<e)
                x=fp(i);
                y=fp(e);
                if(x!=y){
                    if(x<y) swap(x,y);
                    p[x]=y;
                }
            }
        }
        for(int i=0;i<n;i++){
            s.insert(fp(i));
        }
        for(auto e:s){
            cout << "Yeet";
            for(int i=0;i<n;i++) gen[i]=0;
            if(gay(e))
                cout << "Gay found!\n";
            else cout << "Gay not found!\n";
        }
    }
}
