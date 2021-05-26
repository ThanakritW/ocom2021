#include<bits/stdc++.h>
using namespace std;
long a,b;
string str1,str2;
char ans[50];
main(){
    cin >> a >> b;
    for(long i=0;i<a;i++){
        cin >> str1 >> str2;
        if(str2.length()>b) ans[i]='X';
        else if(str1.compare(str2)==0) ans[i]='P';
        else ans[i]='-';
    }
    for(long i=0;i<a;i++){
        cout << ans[i] << " ";
    }
}
