#include <bits/stdc++.h>
using namespace std;

int n,i,a[100010];

string s1,s2,s3;

void bsort(int a[])
{
    int c = 1;
    if(s1 == "greater")
    while(c > 0)
    {
        c=0;
        for(int i=0;i<n-1;i++)
            if(a[i] > a[i+1])
            {
                swap(a[i],a[i+1]);
                c++;
            }
    }
    if(s1 == "less")
    while(c > 0)
    {
        c=0;
        for(int i=0;i<n-1;i++)
            if(a[i] < a[i+1])
            {
                swap(a[i],a[i+1]);
                c++;
            }
    }
}

void slc(int a[])
{
    if(s2 == "greater")
        for(i=0;i<n-1;i++)
        {
            int mni = i;
            for(int j=i+1;j<n;j++)
                if(a[j] < a[mni])
                    mni = j;
            swap(a[i],a[mni]);
        }
    if(s2 == "less")
        for(i=0;i<n-1;i++)
        {
            int mxi = i;
            for(int j=i+1;j<n;j++)
                if(a[j] > a[mxi])
                    mxi = j;
            swap(a[i],a[mxi]);
        }
}
void prnt(int a[])
{
    cout << "\ncurrent array -->\n";
    for(int i=0;i<n;i++)cout << a[i] << " ";
    cout << "\n";
}
void ins(int a[])
{
    int j;
    if(s3 == "greater")
    for(int i=1;i<n;i++)
    {
        int tmp = a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j] < tmp)break;
            a[j+1] = a[j];
        }
        a[j+1] = tmp;
        prnt(a);
    }
    if(s3 == "less")
    for(int i=1;i<n;i++)
    {
        int tmp = a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j] > tmp)break;
            a[j+1] = a[j];
        }
        a[j+1] = tmp;
        prnt(a);
    }
}


int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << "\ninput greater or less 1 times for ins sort ==> ";
    cin /*>> s1 >> s2*/ >> s3;
    /*bsort(a);
    prnt(a);
    slc(a);
    prnt(a);*/
    ins(a);
    prnt(a);

}
