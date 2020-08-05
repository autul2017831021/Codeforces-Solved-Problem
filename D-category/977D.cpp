#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bal(ll x)
{
    x=x*-1;
    ll r=0;
    while(x%3==0)
    {
        r++;
        x=x/3;
    }
    return r;
}
main()
{
    int n;
    vector<pair<ll,ll>>v;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i].second=-x;
        v[i].first=bal(x);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        printf("%lld ",-1*v[i].second);
    }
}
