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
    ll n,s=0;
    cin>>n;
    vector<ll>v,w,tits,ok;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
        s+=x;
        w.pb(s);
    }
    s=0;
    for(int i=n-1;i>=0;i--)
    {
        s=s+v[i];
        ok.pb(s);
    }
    ll l=v.sz-1;
    tits.pb(0);
    for(int i=0;i<n-1;i++)
    {
        l=i;
        if(binary_search(ok.bg,ok.en-l-1,w[i])){
            tits.pb(w[i]);
            //cout<<w[i];nl;
        }
    }
    cout<<*max_element(tits.bg,tits.en);
}
