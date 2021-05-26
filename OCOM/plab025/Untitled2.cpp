/*
TASK: PLAB025 , 751
LANG: C++
AUTHOR: THANAKRIT WONG-ASA
CENTER: KKU022
*/
#include<bits/stdc++.h>
using namespace std;
char a[1010];
int o=0,t=0,g=0;
int main(){
    cin >> a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='O') o++;
        else if(a[i]=='T') t++;
        else if(a[i]=='G') g++;
    }
    cout << min(o/2,min(t,g));
    return 0;
}
