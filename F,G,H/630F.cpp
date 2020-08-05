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
ll nCr(ll n,ll r)
{
    ll x,y;
    x=max(r,(n-r));
    y=min(r,(n-r));
    ll bal=1,sal=1;
    for(ll i=n;i>x;i--)
    {
        bal=bal*i;
    }
    for(ll i=1;i<=y;i++)
    {
        sal=sal*i;
    }
    ll ans=bal/sal;
    return ans;
}
ll nCk(ll n,ll r)
{
    ll ans;
    ans=(((((n*(n-1)/2)*(n-2)/3)*(n-3)/4)*(n-4)/5)*(n-5)/6)*(n-6)/7;
    return ans;
}
main()
{
    ll n,x,y,z;
    cin>>n;
    x=nCr(n,5);
    y=nCr(n,6);
    if(n<=500)
    {
        z=nCr(n,7);
    }
    else
    {
        z=nCk(n,7);
    }
    cout<<x+y+z<<endl;
}

