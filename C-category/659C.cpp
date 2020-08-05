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
    ll n,m,s=0;
    map<ll,ll>mp;
    cin>>n>>m;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(int i=1;;i++)
    {
        if(m-i<0)
            break;
        if(mp[i]==0)
        {
            m=m-i;
            v.pb(i);
        }
    }
    cout<<v.sz<<endl;
    for(int i=0;i<v.sz;i++)
        cout<<v[i]<<" ";
}

