#include<bits/stdc++.h>
#define int long long
using namespace std;
struct gems{
    double happy,s;
    double g;
    bool friend operator<(gems a, gems b){
        return a.happy<b.happy;
    }
};
int n,m;
double t;
priority_queue<gems> q;
gems cur;
main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> t;
        q.push({t,t,1});
    }
    m-=n;
    for(int i=0;i<m;i++){
        cur=q.top(); q.pop();
        cur.happy=cur.s/(++cur.g);
        q.push({ceil(cur.happy),cur.s,cur.g});
    }
    cout << q.top().happy;
}
