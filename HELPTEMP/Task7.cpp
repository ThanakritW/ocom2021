#include<bits/stdc++.h>
using namespace std;
main(){
    array<int,4> a{10,50,60,70};
    for(array<int,4>::iterator it=a.begin();it!=a.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(auto e:a){
        cout << e << " ";
    }
}
