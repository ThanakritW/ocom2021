#include<bits/stdc++.h>
using namespace std;
void prnt(unordered_set<int> s){
    cout << "Including: ";
    for(auto e:s)
        cout<<e<<" ";
    cout << endl;
}
main(){
    int t,n;
    unordered_set<int> a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        a.insert(t);
    }
    prnt(a);
    prnt(a);
//    a.erase(2);
//    prnt(a);
//    a.erase(++a.begin(),(--a.end()));
//    prnt(a);


}
