#include<bits/stdc++.h>
using namespace std;
int a;
set<int> s;
int main(){
    for(int i=0;i<10;i++){
        cin >> a;
        s.insert(a%42);
    }
    cout << s.size();
    return 0;
}