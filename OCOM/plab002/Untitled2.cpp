#include<bits/stdc++.h>
using namespace std;
main()
{
    int j,k;
    cin >> j >> k;
    switch(j)
    {
    case 1:
    {
        switch(k)
        {
        case 1:
            cout << "SE";
            break;
        case 2:
            cout << "CN";
            break;
        case 3:
            cout << "GP";
            break;
        }
        break;
    }
    case 2:
    {
        switch(k)
        {
        case 1:
            cout << "IM";
            break;
        case 2:
            cout << "DM";
            break;
        }
        break;
    }
    case 3:
    {
        switch(k)
        {
        case 1:
            cout << "WG";
            break;
        case 2:
            cout << "GI";
            break;
        case 3:
            cout << "DF";
            break;
        }
        break;
    }
    default:
        cout << "NS";
        break;
    }
}
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int i, j;
//    cin >> i >> j;
//    string ans;
//    switch(i)
//    {
//    case 1 :
//        switch(j)
//        {
//        case 1 :
//            ans = "SE";
//            break;
//        case 2 :
//            ans = "CN";
//            break;
//        case 3 :
//            ans = "GP";
//            break;
//        }
//        break;
//    case 2 :
//        switch(j)
//        {
//        case 1 :
//            ans = "IM";
//            break;
//        case 2 :
//            ans = "DM";
//            break;
//        }
//        break;
//    case 3 :
//        switch(j)
//        {
//        case 1 :
//            ans = "WG";
//            break;
//        case 2 :
//            ans = "GI";
//            break;
//        case 3 :
//            ans = "DF";
//            break;
//        }
//        break;
//    case 4 ... INT_MAX :
//        ans = "NS";
//        break;
//    }
//    cout << ans << endl;
//    return 0;
//}
//
