#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m=0,mx=0;
        ll ans=INT_MAX;
        bool f=0;
        cin>>n;
        pair<ll,ll>p[n+10];
        vector<ll>v,w(n+1,0);
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            p[i].first=x;
            p[i].second=i;
            w[x]++;
        }
        sort(p+1,p+n+1);
        for(ll i=1;i<=n;i++)
        {
            if(w[i]>=m)
            {
                m=w[i];
                mx=i;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(p[i].first==p[i+1].first)
            {
                ll an=p[i+1].second-p[i].second+1;
                ans=min(ans,an);
                f=1;
            }
            ///cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        if(!f)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    }
}

/*
Alterative way
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll ans=INT_MAX;
        cin>>n;
        bool f=0;
        ll a[n+1]={0};
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(a[x]!=0)
            {
                ans=min(ans,i-a[x]);
                f=1;
            }
            a[x]=i;
        }
        if(f)
        {
            cout<<ans+1<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
*/
