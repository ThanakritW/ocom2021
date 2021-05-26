#include<bits/stdc++.h>
using namespace std;
struct p{
    int num;
    int cost;
    int sh;
    p(int a,int b, int c){
        num=a; cost=b;sh=c;
    }
};
struct cmd{
    bool operator () (const p a,const p b){
        if(a.num==b.num) {
            if(a.cost == b.cost) return a.sh>b.sh;
            return a.cost>b.cost;
        }
        return a.num < b.num;
    }
};
priority_queue<p,vector<p>,cmd> pq;
int n,ta,tb,tc;
main(){
    p t={0,0,0};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb >> tc;
        pq.push(p(ta,tb,tc));
    }
    cout << "Sorted \n";
    while(!pq.empty()){
        t = pq.top();
        cout << t.num << " " << t.cost << " " << t.sh << "\n";
        pq.pop();
    }
}
//9
//1 1 2
//1 2 1
//1 1 1
//2 1 2
//2 1 1
//2 2 1
//3 1 2
//3 1 1
//3 2 1
