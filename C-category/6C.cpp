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
#define inf 9999999999
main()
{
    ll n,a=0,b=0,ta=0,tb=0;
    cin>>n;
    vector<ll>v;
    ll j=n-1;
    ll i=0;
    for(int ii=0;ii<n;ii++)
    {
        ll xx;
        cin>>xx;
        v.pb(xx);
    }
    ta=v[i];
    tb=v[j];
    while(1)
    {
        if(ta<=tb)
        {
            a++;
            ta=ta+v[++i];
        }
        else
        {
            b++;
            tb=tb+v[--j];
        }
        if(a+b==n)
            break;
    }
    cout<<a<<" "<<b<<endl;
}

