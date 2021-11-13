#include<bits/stdc++.h>
using namespace std;
string s;
char vowel[5]={'a','e','i','o','u'};
int main(){
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<5;j++){
            if(s[i]==vowel[j]){
                i+=2;
                break;
            }
        }
        cout << s[i];
    } 
    return 0;
}