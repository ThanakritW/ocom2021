#include<bits/stdc++.h>
using namespace std;
struct patient{
    string city;
    long ncase;
    void push(string a,long b){
        city=a;
        ncase=b;
    }
};
main(){
    array<patient,55
    > covid;
    int n;
    string ta;
    long tb;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        covid[i].push(ta,tb);
    }
    cout << "iterator\n";
    for(array<patient,3>::iterator it=covid.begin();it!=covid.end();it++){
        cout << (*it).city << " " << (*it).ncase << endl;
    }
    cout << "index\n";
    for(int i=0;i<covid.size();i++){
        cout << covid[i].city << " " << covid[i].ncase << endl;
    }
    cout << "Auto\n";
    for(auto e:covid){
        cout << e.city << " " << e.ncase << endl;
    }
}
//5
//bangkok 3
//beijing 4
//Phuket 20
//Tokyo 10
//Chicago 200
