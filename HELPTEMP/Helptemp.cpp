#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    int a[50000], b[50000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    a[n] = 1001;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < a[i + 1]){
            for (int j = n - 1; j >= 0; j--) {
                if (a[i] > b[j]) {
                    sum = sum + a[i];
                    j = - 1;
                }
            }
        }
    }
    cout << sum;
}
