#include<bits/stdc++.h>
using namespace std;
main()
{
    float n,w;
    cin >> n;
    for(float i=1; i<=n; i++)
    {
        for(float j=1; j<=i; j++)
        {
            for(float k=1; k<=j; k++)
            {
                w = (float)cbrt(pow(i,2)+pow(j,2)+pow(k,2));
                if(w == (int)w)
                {
                    cout << w << " " << k << " " << j << " " << i  << endl;
                }
            }
        }
    }
}
