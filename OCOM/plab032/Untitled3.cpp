#include<bits/stdc++.h>
using namespace std;
struct qc{
    int a;
    string b;
    int c;
};
void printq(queue<qc> x){
    while(!x.empty()){
        cout << x.front().a << " " << x.front().b << " " << x.front().c << '\n';
        x.pop();
    }
}
queue<qc> q;
int n,ta,tc,t;
string tb,cmd;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd=="que_i_a"){
            cin >> t;
            for(int j=0;j<t;j++){
                cin >> ta >> tb >> tc;
                q.push({ta,tb,tc});
            }
        }
        else if(cmd=="que_i"){
            cin >> ta >> tb >> tc;
            q.push({ta,tb,tc});
        }
        else if(cmd=="que_d"){
            q.pop();
        }
        else if(cmd=="que_p_f"){
            cout << q.front().a << " " << q.front().b << " " << q.front().c << '\n';
        }
        else if(cmd=="que_p_l"){
            cout << q.back().a << " " << q.back().b << " " << q.back().c << '\n';
        }
        else if(cmd=="que_p_a"){
            printq(q);
        }
        else if(cmd=="que_s"){
            cout << q.size() << '\n';
        }
    }
}
