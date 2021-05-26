#include<bits/stdc++.h>
using namespace std;
long n,temp,total=0;
priority_queue<long> a,b;
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
    for(int i=0;i<n;i++){
        total += abs(b.top()-a.top());
        a.pop();
        b.pop();
    }
    cout << total;
}
