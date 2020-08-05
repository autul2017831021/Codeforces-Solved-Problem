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
    ll n,k,beshi=0;
    map<ll,ll>m;
    map<ll,bool>aa;
    vector<ll>audi,sub;
    bool f[200001]={0};
    bool g[200001]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
        aa[x]=1;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        audi.pb(x);
    }
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        sub.pb(x);
    }
    /// ashol kaj shuru
    for(int i=0;i<k;i++)
    {
        if(aa[audi[i]]==1)
        {
            //cout<<audi[i]<<" ";
            beshi=max(beshi,m[audi[i]]);
        }
    }
    //cout<<endl<<beshi;
    for(int i=0;i<k;i++)
    {
        if(m[audi[i]]==beshi)
        {
            //a1.pb(audi[i]);
            //s1.pb(sub[i]);
            //cout<<audi[i]<<" ";
            f[i]=1;
        }
    }
    //cout<<endl;
    beshi=0;
    for(int i=0;i<k;i++)
    {
        if(aa[sub[i]]==1 && f[i]==1)
        {
            //cout<<audi[i]<<" ";
            beshi=max(beshi,m[sub[i]]);
        }
    }
    //cout<<beshi<<endl;
    for(int i=0;i<k;i++)
    {
        if(m[sub[i]]==beshi && f[i]==1)
        {
            //cout<<sub[i]<<" ";
            g[i]=1;
        }
    }
    //cout<<endl;
    for(int i=0;i<k;i++)
    {
        if(g[i]==1)
        {
            cout<<i+1<<endl;
            r0;
        }
    }
}
