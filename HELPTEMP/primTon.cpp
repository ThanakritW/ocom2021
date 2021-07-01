#include <bits/stdc++.h>
using namespace std;

int nn,ne,d,t,tt,ttt,tw;

bool m[100];

using p = pair<int,int>;

vector <p> v[100];

priority_queue <p,vector<p>,greater<p>> pq;

int cnt=0;//

int main()
{
    cin >> nn >> ne;
    for(int i=0;i<ne;i++)
    {

        cin >> t >> tt >> ttt;
        v[t].push_back({tt,ttt});
        v[tt].push_back({t,ttt});
    }
    pq.push({0,4});
    while(cnt<nn)//
    {
        t = pq.top().second;
        tw = pq.top().first;
        pq.pop();
        m[t]=true;
        d+=tw;
        for(auto e : v[t])
        {
            if(!m[e.first])
            {
                pq.push({e.second,e.first});
            }
        }
        cnt++;//
    }
    cout << d;
}
