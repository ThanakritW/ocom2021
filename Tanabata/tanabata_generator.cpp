#include<bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main(){
    cin >> s;
    cnt=s.size();
    cout << "\t    |\n\t    |\n\t---------\n";
    for(int i=0;i<max(cnt,10);i++){
        cout << "\t|   ";
        if(i<cnt)
        cout << s[i];
        else cout << " ";
        cout << "   |\n";
    }
    cout << "\tFUCK---------\n";
    return 0;
}
