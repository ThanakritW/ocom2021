#include<bits/stdc++.h>
using namespace std;
int n,g,town[500100],l,r,m,mx=0,result;
main(){
    cin >> n >> g;
    for(int i=0;i<n;i++){
        cin >> town[i];
        mx=max(mx,town[i]);
    }
    l=0;
    r=mx;
    while(l<r){
        m=(l+r)/2;
        result=0;
        for(int i=0;i<n;i++){
            result+=(ceil((float)town[i]/(float)m));
        }

        if(result<=g){
            r=m;
        }
        else{
            l=m+1;
        }
    }
//    if(l<g) l++;
    cout << l;
}

/*
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
*/
