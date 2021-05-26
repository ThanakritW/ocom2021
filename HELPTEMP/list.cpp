#include<bits/stdc++.h>
using namespace std;
struct word{
    string word;
    int tf;
};
main(){
    list<word>  words={{"apple",5},{"banana",6}};
    list<word> :: iterator pos=words.begin();
    words.insert(next(pos,3),{"mango",5});
    for(auto it=words.rbegin();it!=words.rend();it++)
        cout << (*it).word << " " << (*it).tf << endl;
}
