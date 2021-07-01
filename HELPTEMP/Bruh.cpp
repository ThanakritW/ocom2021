#include<bits/stdc++.h>
using namespace std;
struct node{
    int to,w;
    node(int a,int b){
        to=a; w=b;
    }
};
vector<node> v[10];
int n,e,ta,tb,c,b[10],d[10];
main(){
    cout <<"FUCK";
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> c;
        v[ta].push_back({tb,c});
        d[i]=INT_MAX;
    }
    d[0]=0;
    for(int i=0;i<n;i++){
        b[i]=d[i];
        for(auto e:v[i]){
            if(d[e.to]>b[i]+e.w){
                d[e.to]>b[i]+e.w;
                cout <<"BOI\n";
            }
        }
        d[i]=b[i];
    }
}

