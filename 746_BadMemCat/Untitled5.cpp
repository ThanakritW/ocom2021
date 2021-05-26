#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int temp;
main(){
    while(1){
        cin >> temp;
        if(temp!=-1) v.push_back(temp);
        else break;
    }
    while(1){
        cin >> temp;
        if(temp!=-1) cout << v[temp-1] << '\n';
        else break;
    }
}
