#include<bits/stdc++.h>
using namespace std;
struct person{
    string name,tele;
    person(string a,string b){
        name=a;
        tele=b;
    }
};
struct cat{
    string name,owner;
    void add(string a,string b){
        name=a;
        owner=b;
    }
};
main(){
    string a,b,c,d;
    person x;
    cat y;
    cin >> a >> b >> c >> d;
    x.add(a,b);
    y.add(c,d);
    cout << "Person's name is " << x.name << ". Tell. " << x.tele << endl;
    cout << "Cat's name is " <<y.name << ". Owner is " << y.owner << endl;
}
