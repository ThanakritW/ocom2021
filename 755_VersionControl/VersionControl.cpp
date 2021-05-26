#include<bits/stdc++.h>
using namespace std;
struct tt{
    int cm;a
    char a;
    int nu;
};
stack<tt> cmd;
stack<char> ans;
int n,tn;
char t,tc;
tt x;
bool act;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> t;
        if(t=='T'){
            cin >> tc;
            cmd.push({1,tc,0});
        }
        else{
            cin >> tn;
            cmd.push({2,'0',tn});
        }
    }
    while(!cmd.empty()){
        x=cmd.top();
        if(x.cm==1){
            ans.push(x.a);
            cmd.pop();
        }
        else{
            act=1;
            while(x.cm==2){
                x=cmd.top();
                if(act==1){
                    for(int i=0;i<x.nu;i++){
                        cmd.pop();
                        if(cmd.empty()) break;
                    }
                    act=0;
                }
                else{
                    cmd.pop();
                    act=1;
                }
            }
        }
    }
    while(!ans.empty()){
        cout <<ans.top();
        ans.pop();
    }
}
