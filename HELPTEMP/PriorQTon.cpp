#include <bits/stdc++.h>
using namespace std;

int n,i,t,tt,ttt;
using p = tuple <int,int,int>;
queue <p> q;

string s;
struct cmd{
    bool friend operator()(p a,p b)
    {
        int a1,a2,a3,b1,b2,b3;
        tie(a1,a2,a3) = a;
        tie(b1,b2,b3) = b;
        if(a1 == b1)return a2 < b2;
    if(a2 == b2)return a3 < b3;
        return a1 > b1;
    }
};
priority_queue <p,vector<p>, cmd> pq;
int main()
{
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> t >> tt >> ttt;
        pq.push(p(t,tt,ttt));
    }
    cout << "\n";
    while(!pq.empty())
    {
        int x,y,z;
        tie(x,y,z) = pq.top();
        cout << x << " " << y << " " << z << "\n";
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
