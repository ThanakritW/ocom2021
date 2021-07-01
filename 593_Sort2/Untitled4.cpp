#include<bits/stdc++.h>
using namespace std;
int n,e=0,o=0,ae[500010],ao[500010],t;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t%2==0){
            ae[e]=t;
            e++;
        }
        else{
            ao[o]=t;
            o++;
        }
    }
    sort(ae,ae+e);
    sort(ao,ao+o,greater<int>());
    for(int i=0;i<e;i++){
        cout <<ae[i]<< " ";
    }
    for(int i=0;i<o;i++){
        cout <<ao[i]<< " ";
    }
}
