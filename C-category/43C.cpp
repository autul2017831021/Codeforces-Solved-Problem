using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
main()
{
    dl n,k;
    cin>>n;
    int a[3]={0};
    for(int i=1;i<=n;i++)
    {
        string x;
        cin>>x;
        int s=0;
        for(int i=0;i<x.sz;i++)
        {
            s=s+(x[i]-'0');
        }
        a[s%3]++;
    }
    k=a[0]/2;
    int m=min(a[1],a[2]);
    cout<<k+m<<endl;

}
