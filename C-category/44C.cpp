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
    int n,m,s=0;
    cin>>n>>m;
    int a[n+10]={0};
    for(int ii=1;ii<=m;ii++)
    {
        int b,c;
        cin>>b>>c;
        if(b==c)
        {
            a[c]++;
        }
        else
        {
            for(int i=b;i<=c;i++)
            {
                a[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=1)
        {
            cout<<i<<" "<<a[i];
            r0;
        }
    }
    cout<<"OK";
    r0;
}
