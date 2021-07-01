#include<bits/stdc++.h>
using namespace std;
int n;
main(){
    cin >> n;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2-i;j++) cout << " ";
        cout << "*";
        for(int j=0;j<i;j++) cout << "^*";
        cout << '\n';
    }
    for(int i=0;i<n;i++){
        if(i==(n/2)) cout << 'N';
        else if(i%2==0) cout << '*';
        else cout << '^';
    }
    cout << '\n';
    for(int i=n/2-1;i>=0;i--){
        for(int j=0;j<n/2-i;j++) cout << " ";
        cout << "*";
        for(int j=0;j<i;j++) cout << "^*";
        cout << '\n';
    }
}
