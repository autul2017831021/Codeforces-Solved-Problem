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
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl cout<<endl;
main()
{
    ll n,c=0,s=0;
    cin>>n;
    vector<ll>v,w;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
        s+=x;
    }
    sort(v.rbg,v.ren);
    if(v[0]-v[n-1]==1 || n==1)
    {
        cout<<c;nl
        r0;
    }
    ll av,m;
    av=s/n;
    m=s%n;
    for(int i=0;i<n;i++)
        w.pb(av);
    for(int i=0;i<m;i++)
        w[i]+=1;
    for(int i=0;i<n;i++)
    {
        if(w[i]<v[i])
            c=c+(v[i]-w[i]);
    }
    cout<<c<<endl;
}

