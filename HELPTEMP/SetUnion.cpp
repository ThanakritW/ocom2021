#include<bits/stdc++.h>
using namespace std;
main(){
    set<int> s1,s2,s3;
    int n,m,temp;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> temp;
        s1.insert(temp);
    }
    for(int i=0;i<m;i++){
        cin >> temp;
        s2.insert(temp);
    }
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    for(auto e:s3){
        cout << e << " ";
    }
    cout << endl;
}
