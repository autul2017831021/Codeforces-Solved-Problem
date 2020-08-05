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
#define r0 return 0
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
main()
{
    ll n,s=0;
    cin>>n;
    vector<ll>v,w;
    ml m;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
        s+=x;
        m[x]++;
    }
    for(int i=0;i<n;i++)
    {
        ll baki=s-v[i];
        if(baki%2)
            continue;
        else
        {
            ll h=baki/2;
            if(m[h]==1 && h!=v[i])
            {
                w.pb(i+1);
            }
            else if(m[h]>1)
                w.pb(i+1);
        }
    }
    cout<<w.sz;nl;
    for(int i=0;i<w.sz;i++)
    {
        cout<<w[i];sp;
    }
    nl;
}
