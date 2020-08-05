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
#define inf -9999999999
main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> >v;
    vector<ll>x,y;
    for(int i=0;i<n;i++)
    {
        ll xx;
        cin>>xx;
        v.pb({xx,i+1});
    }
    sort(v.rbg,v.ren);
    for(int i=0;i<v.sz-1;i++)
    {
        if(i%2==0)
        {
            x.pb(v[i].S);
        }
        else
            y.pb(v[i].S);
    }
    y.pb(v[n-1].S);
    cout<<x.sz<<endl;
    for(int i=0;i<x.sz;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl<<y.sz<<endl;
    for(int i=0;i<y.sz;i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
}


