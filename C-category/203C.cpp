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
    ll n,d,a,b,c=0,s,t;
    cin>>n>>d>>a>>b;
    vector< pair<ll,ll> >v;
    vector<ll>w;
    for(int i=0;i<n;i++)
    {
        ll xx,yy;
        cin>>xx>>yy;
        s=a*xx;
        t=b*yy;
        s=s+t;
        v.pb({s,i+1});
    }
    sort(v.bg,v.en);
    for(int i=0;i<v.sz;i++)
    {
        if(v[i].F<=d)
        {
            d=d-v[i].F;
            w.pb(v[i].S);
        }
        else
            break;
    }
    cout<<w.sz<<endl;
    for(int i=0;i<w.sz;i++)
        cout<<w[i]<<" ";
    cout<<endl;
    r0;
}

