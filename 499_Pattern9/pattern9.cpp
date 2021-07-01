#include <iostream>
using namespace std;
long long n;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << i << ": *";
        int t=i;
        while(t%2==0){
            t=t/2;
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
