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
main()
{
    ll n,r,av,s=0,c=0;
    cin>>n>>r>>av;
    vector< pair<ll,ll> >v;
    for(int i=0;i<n;i++)
    {
        ll xx,yy;
        cin>>xx>>yy;
        s=s+xx;
        if(xx<r)
            v.pb({yy,r-xx});
    }
    av=av*n;
    if(s>=av)
    {
        cout<<"0";
        r0;
    }
    s=av-s;
    sort(v.bg,v.en);
    for(int i=0;i<v.sz;i++)
    {
        ll re=min(v[i].S,s);
        s=s-re;
        c=c+(re*v[i].F);
        if(s==0)
            break;
    }
    cout<<c<<endl;
}

