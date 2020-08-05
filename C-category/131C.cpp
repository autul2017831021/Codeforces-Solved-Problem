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
ll nopera(ll n,ll r)
{
    ll res=1;
    for(ll i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
main()
{
    ll b,g,t,ans=0;
    cin>>b>>g>>t;
    for(ll i=4;i<t;i++)
    {
        ll boy,girl;
        boy=nopera(b,i);
        girl=nopera(g,abs(t-i));
        ans=ans+(boy*girl);
    }
    cout<<ans<<endl;
}

