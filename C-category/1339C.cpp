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
main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll m=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                ll c=0;
                ll d=v[i-1]-v[i];
                c=log2(d)+1;
                //cout<<c<<endl;
                m=max(m,c);
                v[i]=v[i-1];
            }
        }
        cout<<m<<endl;
    }
}
