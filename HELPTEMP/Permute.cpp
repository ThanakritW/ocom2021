#include<bits/stdc++.h>
using namespace std;
vector<string> str;
void permute(vector<string> v){
    sort(v.begin(),v.end());
    int cnt=0;
    do{
        for(auto e:v){
            cout << e << " ";
        }
        cout << '\n';
        cnt++;
    }while(next_permutation(v.begin(),v.end()));
    cout << cnt;
}
string t;
long n;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        str.push_back(t);
    }
    permute(str);
}
