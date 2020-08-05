#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool bal(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
main()
{
    ll n;
    cin>>n;
    pair<ll,ll>p[n];
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        p[i].first=x;
        p[i].second=i;
    }
    sort(p,p+n);
    ll t=p[0].first;
    for(int i=1;i<n;i++)
    {
        ll c=p[i].first;
        if(c>t)
        {
            t=p[i].first;
        }
        else
        {
            t=t+1;
            p[i].first=t;
        }
    }
    sort(p,p+n,bal);
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" ";
    }
    return 0;
}
