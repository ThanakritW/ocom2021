#include<bits/stdc++.h>
using namespace std;
#define p pair<string,int>
stack<p> s;
int n,m,b;
string cmd,a;
void printstk(stack<p> x){
    while(!x.empty()){
        cout << x.top().first << " " << x.top().second << '\n';
        x.pop();
    }
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd=="stk_i_a"){
            cin >> m;
            for(int j=0;j<m;j++){
                cin >> a >> b;
                s.push({a,b});
            }
        }
        else if(cmd=="stk_i"){
            cin >> a >> b;
            s.push({a,b});
        }
        else if(cmd=="stk_p"){
            cout << s.top().first << " " << s.top().second << '\n';
        }
        else if(cmd=="stk_d") s.pop();
        else if(cmd=="stk_p_a"){
            printstk(s);
        }
        else if(cmd=="stk_s") cout << s.size() << '\n';
    }
}
