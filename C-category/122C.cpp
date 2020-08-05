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
    ll l,r;
    cin>>l>>r;
    vector<ll>v;
    queue<ll>q;
    q.push(4);
    q.push(7);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        v.pb(x);
        if(x<2e9)
        {
            q.push(x*10+4);
            q.push(x*10+7);
        }
    }
    /*
    cout<<v.sz;nl;
    for(int i=0;i<v.sz;i++)
        cout<<v[i]<<" ";
    nl;
    */
    ll f,s;
    f=upper_bound(v.bg,v.en,l)-v.bg;
    s=upper_bound(v.bg,v.en,r)-v.bg;
    if(binary_search(v.bg,v.en,l))
        f--;
    if(binary_search(v.bg,v.en,r))
        s--;
    //cout<<f<<"->"<<v[f]<<endl<<s<<"->"<<v[s];
    nl;
    if(f==s)
    {
        ll dif=r-l+1;
        dif=dif*v[f];
        cout<<dif;
        r0
    }
    ll bal=0,sal=0;
    for(int i=f;i<=s;i++)
    {
        ll d;
        if(i==f)
        {
            if(binary_search(v.bg,v.en,l))
            {
                d=v[i];
                sal=sal+d;
            }
            else
            {
                d=v[i]-l+1;
                d=d*v[i];
                sal+=d;
            }
        }
        else if(i==s)
        {
            if(binary_search(v.bg,v.en,r))
            {
                d=v[i]-v[i-1];
                d=d*v[i];
                sal=sal+d;
                continue;
            }
            else
            {
                d=r-v[i-1];
                d=d*v[i];
                sal=sal+d;
            }
        }
        else
        {
            d=v[i]-v[i-1];
            d=d*v[i];
            sal+=d;
        }
    }
    //cout<<"hoynai";nl;
    cout<<sal;nl;
}
