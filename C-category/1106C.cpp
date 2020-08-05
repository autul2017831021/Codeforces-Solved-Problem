
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
vector<ll>v;
ll ans=0;
void B(ll x)
{
    sort(v.bg,v.en);
    for(int i=0;i<x/2;i++)
    {
        ll s=v[i]+v[v.sz-i-1];
        s=s*s;
        ans=ans+s;
    }
    cout<<ans<<endl;
}
main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    B(n);
}
