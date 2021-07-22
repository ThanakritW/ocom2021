#include<iostream>
#include<string>
using namespace std;
string s1,s2;
int main(){
    cin >> s1>>s2;
    if(s1=="node" && s2=="-v") cout << "TRUE";
    else cout << "FALSE";
    return 0;
}