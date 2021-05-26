#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long n,temp,cnt,t1,t2,ans[100100];
vector<long> v;
vector<long> :: iterator itl,itu;
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t1 >> t2;
        if(t2<t1) swap(t1,t2);
        itl=lower_bound(v.begin(),v.end(),t1);
        itu=upper_bound(v.begin(),v.end(),t2);
        cnt=0;
        while(itl!=itu){
            itl++;
            cnt++;
        }
        cout << cnt << endl;
    }
//    for(int i=0;i<n;i++){
//        cout << ans[i] << endl;
//    }
}
