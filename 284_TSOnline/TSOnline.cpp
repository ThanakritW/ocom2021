#include<bits/stdc++.h>
using namespace std;
priority_queue<long> a,b;
long temp, n, total=0;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        a.push(temp);
    }
    for(int i=0;i<n;i++){
        cin >> temp;
        b.push(temp);
    }
    while(!a.empty() && !b.empty()){
        if(a.top() > b.top()){
            total+=a.top();
            a.pop();
        }
        b.pop();
    }
    cout << total;
}
