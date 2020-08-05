using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;
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
        map<ll,ll>m;
        ll d=0;
        set<long long>s;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m[x]++;
            s.insert(x);
            d=max(d,m[x]);
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll l=s.sz;
        if(d==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        ll xx,yy;
        xx=min(l-1,d);
        yy=min(l,d-1);
        cout<<max(xx,yy)<<endl;
    }
}


