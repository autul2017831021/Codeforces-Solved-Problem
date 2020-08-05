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
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
bool bal(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
main()
{
    ll n,w,x;
    cin>>n>>w;
    vp v,vv;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb({x,i});
    }
    bool f=1;
    sort(v.rbg,v.ren);
    for(int i=0;i<n;i++)
    {
        x=v[i].F;
        x=(ll)ceil(x/2.0);
        if(x>w)
        {
            cout<<"-1";
            r0
        }
        w=w-x;
        vv.pb({x,v[i].S});
    }
    ll in=0;
    while(w!=0)
    {
        ll d=v[in].F - vv[in].F;
        if(w>=d)
        {
            vv[in].F+=d;
            w=w-d;
        }
        else
        {
            vv[in].F+=w;
            w=0;
            break;
        }
        //cout<<"baki->"<<w<<" "<<v[in].F<<" "<<vv[in].F;nl;
        in++;
        if(in==n)
            break;
    }
    if(w>0)
    {
        cout<<"-1";
        r0
    }
    sort(vv.bg,vv.en,bal);
    for(int i=0;i<n;i++)
    {
        cout<<vv[i].F;sp;
    }
    nl;r0
}
