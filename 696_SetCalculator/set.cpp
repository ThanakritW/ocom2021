#include<bits/stdc++.h>
using namespace std;
string cmd;
int seta(int x){
    int av=0;
    for(int i=0;i<x;i++){
        av=av*10+(cmd[i]-'0');
    }
    return av;
}
int setb(int x){
    int bv=0;
    for(int i=x+1;i<cmd.size();i++){
        bv=bv*10+(cmd[i]-'0');  
    }
    return bv;
}
int n,o,sz,temp,a,b;
set<int> s[1010],st;
int main(){
    cin >> n >> o;
    for(int i=1;i<=n;i++){
        cin >> sz;
        for(int j=0;j<sz;j++){
            cin >> temp;
            s[i].insert(temp);
        }
    }
    for(int k=0;k<o;k++){
        cin >> cmd;
        for(int i=1;i<cmd.size();i++){
            /*
            if(cmd[i]=='U' or cmd[i]=='|' or cmd[i]=='-'){
                a=seta(i);
                b=setb(i);
                break;
            }
            */
            if(cmd[i]=='U'){
                a=seta(i);
                b=setb(i);
                for(auto e:s[a]){
                    st.insert(e);
                }
                for(auto e:s[b]){
                    st.insert(e);
                }
                break;
            }
            else if(cmd[i]=='|'){
                a=seta(i);
                b=setb(i);
                for(auto e:s[b]){
                    if(s[a].find(e)!=s[a].end()){
                        st.insert(e);
                    }
                }
                break;
            }
            else if(cmd[i]=='-'){
                a=seta(i);
                b=setb(i);
                for(auto e:s[a]){
                    st.insert(e);
                }
                for(auto e:s[b]){
                    if(s[a].find(e)!=s[a].end()){
                        st.erase(e);
                    }
                }
                break;
            }
        }
        //cout << "[" << a << ',' << b << ']' << '\n';
        if(st.empty()){
            cout << "Empty\n";
        }
        else{
            for(auto e:st){
                cout << e << " ";
            }
            cout << '\n';
        }
        st.clear();
    }
    return 0;
}
