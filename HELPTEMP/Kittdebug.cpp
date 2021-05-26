#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int h, int x)
{
    int mid=(h+l)/2;
    if (arr[mid]==x)
            return mid;
    if (h>l)
    {
        else if (arr[mid]>x)
            return binarySearch(arr,mid+1,h,x);
        else
            return binarySearch(arr,l,mid-1,x);

    }
    return -1;
}
int n,na,arr[50000],key,s=0,in=0,chk[50000],index;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n,greater<int>());
    cin >> na;
    for(int i=0;i<na;i++)
    {
        cin >> chk[i];
        index=binarySearch(arr,0,n-1,chk[i]);
        if (index!=-1)
        {
            s++;
            in=in+index;
        }
    }
    cout << s << " " << in;
    return 0;
}
