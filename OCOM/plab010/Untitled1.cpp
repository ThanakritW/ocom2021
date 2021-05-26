#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
    vector<int> s;
    int temp,q,on=0,n,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> temp;
        if(binary_search(s.begin(),s.end(),temp)){
            if(temp%2==1){
                on++;
            }
            cnt++;
        }
    }
    cout << cnt << " "<< on;
}
