#include <bits/stdc++.h>
using namespace std;
long long top[3], mid[3], bottom[3], n;
int main()
{
    top[1] = 2;
    mid[1] = 3;
    bottom[1] = 2;
    bottom[0] = 1;
    top[0] = 1;
    cin >> n;
    if (n == 1)
    {
        cout << 7;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        //calculate current value
        top[2] = (mid[1] + top[1] + bottom[0]) % 1000000007;
        mid[2] = (top[1] + mid[1] + bottom[1]) % 1000000007;
        bottom[2] = (mid[1] + bottom[1] + top[0]) % 1000000007;
        //prefix sum
        top[0] = (top[0] + top[1]) % 1000000007;
        bottom[0] = (bottom[0] + bottom[1]) % 1000000007;
        //update last value
        top[1] = top[2] % 1000000007;
        bottom[1] = bottom[2] % 1000000007;
        mid[1] = mid[2] % 1000000007;
    }
    cout << (top[2] + mid[2] + bottom[2]) % 1000000007;
    return 0;
}