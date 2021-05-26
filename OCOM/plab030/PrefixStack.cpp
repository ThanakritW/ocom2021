#include<bits/stdc++.h>
using namespace std;
stack<string> s;
string a,ans;
string ta,tb,tt;
main(){
    cin >> a;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'){
            tt=a[i];
            s.push(tt);
        }
        else{
            ta=s.top();
            s.pop();
            tb=s.top();
            s.pop();
            s.push(("("+tb+a[i]+ta+")"));
        }
    }
    cout << s.top();
}


//abc+*
//(a*(b+c))

//abc*d+-
//a(b*c)d+-
//a((b*c)+d)-
//(a-((b*c)+d))
