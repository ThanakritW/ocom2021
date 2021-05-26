#include<bits/stdc++.h>
using namespace std;
double aver(vector<int> x){
    double total=0;
    for(int i=0;i<x.size();i++){
        total+=x[i];
    }
    return total/x.size();
}
int mx(vector<int> x){
    int mx=-INT_MAX;
    for(int i=0;i<x.size();i++){
        mx=max(mx,x[i]);
    }
    return mx;
}
int mn(vector<int> x){
    int mn=INT_MAX;
    for(int i=0;i<x.size();i++){
        mn=min(mn,x[i]);
    }
    return mn;
}
main(){
    vector<int> v1,v2,v3;
    int n,ta,tb,tc;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb >> tc;
        v1.push_back(ta);
        v2.push_back(tb);
        v3.push_back(tc);
    }
    cout << "Average of 1st subject is " << aver(v1)<<endl;
    cout << "Average of 2nd subject is " << aver(v2)<<endl;
    cout << "Average of 3rd subject is " << aver(v3)<<endl;
    cout << "Max of 1st subject is " << mx(v1)<<endl;
    cout << "Max of 2nd subject is " << mx(v2)<<endl;
    cout << "Max of 3rd subject is " << mx(v3)<<endl;
    cout << "Min of 1st subject is " << mn(v1)<<endl;
    cout << "Min of 1st subject is " << mn(v2)<<endl;
    cout << "Min of 1st subject is " << mn(v3)<<endl;
}
