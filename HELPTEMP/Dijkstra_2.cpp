#include<bits/stdc++.h>
using namespace std;
struct node{
    int to,w;
    bool friend operator<(const node &a,const node &b){
        return a.w>b.w;
    } //overloading < to be > instead.
};
int p[10010];           //for recognizing path
vector<node> v[10010];  //adjacency list
stack<int> path;        // for printing path
int n,e,s,t,w[10010],ta,tb,tc,trace;
priority_queue<node> q;
node c;
main(){
    cin >> n >> e >> s >> t; //input node, edge, source, target
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb,tc});
        v[tb].push_back({ta,tc}); //Undirected Graph
    }
    for(int i=0;i<n;i++){
        w[i] = INT_MAX; //set INT_MAX for each node
    }
    q.push({s,0}); //push in the start node before entering dijkstra algorithm
    while(!q.empty()){
        c=q.top(); //get the node with the least distance.
        q.pop(); //pop the node to prevent repeating the sam node
        if(c.to==t){ //If target was found
            cout << w[c.to]<< '\n' ; //print target
            break; //break the loop to reduce time usage.
        }
        for(auto e:v[c.to]){
            if(w[e.to]>c.w+e.w){ //if new distance less than existing path
                w[e.to]=c.w+e.w; //relaxing edge
                q.push({e.to,w[e.to]}); //push new node to search
                p[e.to]=c.to;//regsitering c.to as a backtrack path for e.to
            }
        }
    }
    cout << s; //print out start node
    path.push(t);//push in end node;
    trace=t;//assign target at the start point
    while(p[trace]!=s){ //backtracking the path
        trace=p[trace]; //assign the back node
        path.push(trace); // push in path;
    }
    while(!path.empty()){ //print path
        cout << "->" << path.top();
        path.pop();
    }
}
