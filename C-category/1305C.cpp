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
    ll n,m;
    cin>>n>>m;
    bool f[200001]={0};
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    if(n<=m)
    {
        vector<ll>w;
        ll ans=1;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                w.pb(abs(v[i]-v[j]));
            }
        }
        for(int i=0;i<w.sz;i++)
        {
            ll bal=(w[i]%m);
            ans=ans*bal;
            ans=ans%m;
        }
        cout<<ans<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}

