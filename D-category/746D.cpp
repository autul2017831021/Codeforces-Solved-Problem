#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    if(a==b)
    {
        if(a==0)
        {
            cout<<"NO";r0;
        }
        for(int i=0;i<n/2;i++)
            cout<<"BG";
        r0;
    }
    else if(a>b)
    {
        ll d=a/(b+1);
        ll r=a%(b+1);
        //cout<<d<<endl<<a<<endl;
        if(d>k || (d==k && r))
        {
            cout<<"NO";
            r0;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<=d;j++)
            {
                cout<<"G";
            }
            cout<<"B";
        }
        for(int i=0;i<b-r;i++)
        {
            for(int j=0;j<d;j++)
                cout<<"G";
            cout<<"B";
        }
        for(int i=0;i<d;i++)
            cout<<"G";
        r0;
    }
    else
    {
        swap(a,b);
        ll d=a/(b+1);
        ll r=a%(b+1);
        //cout<<d<<endl<<a<<endl;
        if(d>k || (d==k && r))
        {
            cout<<"NO";
            r0;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<=d;j++)
            {
                cout<<"B";
            }
            cout<<"G";
        }
        for(int i=0;i<b-r;i++)
        {
            for(int j=0;j<d;j++)
                cout<<"B";
            cout<<"G";
        }
        for(int i=0;i<d;i++)
            cout<<"B";
        r0;
    }
}

