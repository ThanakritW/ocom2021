#include<bits/stdc++.h>
using namespace std;
int a[4];
string s;
int main(){
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cin >> s;
    for(int i=0;i<3;i++){
        cout << a[s[i]-'A'] << " ";
    }
    return 0;
}