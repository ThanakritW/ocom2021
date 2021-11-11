#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    for(int i=0;i<s.size();i++){
        cout << "..";
        if(i%3!=2)cout << '#';
        else cout << '*';
        cout << '.';
    }
    cout << ".\n";
    for(int i=0;i<s.size();i++){
        if(i%3!=2) cout << ".#.#";
        else cout << ".*.*";
    }
    cout << ".\n";
    for(int i=0;i<s.size();i++){
        if(i%3!=2) cout << "#.";
        else{
            cout << "*." << s[i] << ".";
            if(i<s.size()-1){
                cout << "*.";
            }
            else break;
            i++;
        }
        cout << s[i] << ".";
    }
    if(s.size()%3==0) cout << "*\n";
    else cout << "#\n";
    for(int i=0;i<s.size();i++){
        if(i%3!=2) cout << ".#.#";
        else cout << ".*.*";
    }
    cout << ".\n";
    for(int i=0;i<s.size();i++){
        cout << "..";
        if(i%3!=2)cout << '#';
        else cout << '*';
        cout << '.';
    }
    cout << ".\n";
    return 0;
}