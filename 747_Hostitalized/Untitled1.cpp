#include<bits/stdc++.h>
using namespace std;
struct patient{
    string name;
    int im;
    friend bool operator<(const patient &a,const patient &b){
        return a.im<b.im;
    }
};
priority_queue<patient,vector<patient>> q;
string name,cmd;
int im;
int main(){
    while(1){
        cin >> cmd;
        if(cmd == "New"){
            cin >> name >> im;
            q.push({name,im});
        }
        else if(cmd=="Call"){
            cout << (q.top()).name <<'\n';
            q.pop();
        }
        else if(cmd=="Exit") break;
    }
    return 0;
}
