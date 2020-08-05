#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,l=0,r=0;
    cin>>n;
    ll h=n/2;
    vector<ll>v,w;
    v.push_back(0);
    w.push_back(0);
    for(int i=0;i<h;i++)
    {
        ll x;
        cin>>x;
        w.push_back(x);
    }
    for(int i=0;i<n;i++)
        v.push_back(0);
    v[1]=0;
    v[n]=w[1];
    l=0;r=v[n];
    for(int i=2;i<=h;i++)
    {
        if(w[i]<=r)
        {
            v[i]=l;
            v[n-i+1]=w[i]-l;
            l=v[i];r=v[n-i+1];
        }
        else
        {
            l=max(w[i]-r,l);
            v[i]=l;
            v[n-i+1]=w[i]-l;
            r=v[n-i+1];
        }
    }
    for(int i=1;i<v.size();i++)
        cout<<v[i]<<" ";
}

