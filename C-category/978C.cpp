#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef map<ll,ll> ml;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")

main()
{
    ll n,m,s=0;
    cin>>n>>m;
    vector<ll>v,w,p;
    v.pb(0);
    p.pb(0);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        s=s+x;
        v.pb(s);
        p.pb(x);
    }
    for(int i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        w.pb(x);
    }
    for(int i=0;i<m;i++)
    {
        ll x=w[i];
        ll ub=upper_bound(v.bg,v.en,x)-v.bg;
        if(binary_search(v.bg,v.en,x))
        {
            cout<<ub-1<<" "<<p[ub-1];nl;

        }
        else{
            cout<<ub;sp;
            ll d=x-v[ub-1];
            cout<<d;nl;
        }
    }
}
