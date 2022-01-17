#include<bits/stdc++.h>
using namespace std;
stack<int> cart;
stack<char> s;
string a;
void pack(){
    int total=cart.top(); cart.pop();
    total+=cart.top();cart.pop();
    int fee=2;
    for(int i=0;i<s.top();i++) fee*=2;
    s.pop();
    fee+=100;
    cart.push(total*fee/100);
}
int main(){
    cin >> a;
    a='['+a+']';
    for(auto e:a){
        if(e=='['){
            s.push('[');
        }else if(e==']'){
            while(!s.empty() && s.top()!='[') pack();
            s.pop();
        }else if(e<='3' && e>='1'){
            while(!s.empty() && s.top()!='[' && s.top()>=e-'0') pack();
            s.push(e-'0');
        }
        else cart.push(20);
        
    }
    cout << cart.top();
    return 0;
}