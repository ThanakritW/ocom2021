#include<bits/stdc++.h>
using namespace std;
void psumofset(multiset<int> x){
    int key,n;
    auto it=x.begin();
    while(!x.empty()){
        it=x.begin();
        key=*it;
        n=x.erase(key);
        cout << key << " " << n << endl;
    }
}
int main(){
    multiset<int> m{10,10,20,10,30,20,20,40,40,50};
    int q,tmp;
    psumofset(m);
    for(auto e:m){
        cout << e << " ";
    }
    cout << endl;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> tmp;
        if(binary_search(m.begin(),m.end(),tmp)){
            cout << tmp << " exists in set\n";
        }
        else cout << tmp << " does exists in set\n";
    }
    return 0;
}
