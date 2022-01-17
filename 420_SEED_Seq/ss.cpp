#include<bits/stdc++.h>
using namespace std;
stack<int> t;
int s;
int main(){
    cin >> s;
    int n=0;
    srand(s);
    t.push(0);
    while(!t.empty() && n<100){
        int c=t.top(); t.pop();
        int rnn = rand();
        cout << rnn << "\n";
        int md=rnn%5;
        cout << c << "(" << (char)('a'+md) << ")\n";
        for(int i=0;i<md;i++) t.push(c+1);
        n++;
    }
    return 0;
}