#include<bits/stdc++.h>
using namespace std;
string a;
int n;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>a;
        if(a[a.size()-1]=='3')
            cout << "Winter lovesong\n";
        else cout << "Winter Lovesong\n";
    }
}
