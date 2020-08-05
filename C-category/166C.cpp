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
main()
{
    ll n,x,ini,ans=inf,f=0;
    cin>>n>>x;
    vector<ll>v,w;
    ini=n;
    v.pb(0);
    for(int i=0;i<n;i++)
    {
        ll xx;
        cin>>xx;
        v.pb(xx);
    }
    sort(v.bg,v.en);
    for(int i=1;i<=n;i++){
        if(v[i]==x){
            w.pb(i);
            f=1;
        }
    }
    if(f==0)
    {
        ll pos1=-1;
        for(int i=n;i>=1;i--)
        {
            if(v[i]<x)
            {
                pos1=i+1;
                break;
            }
        }
        if(pos1==-1)
            pos1=1;
        ll ans=0;
        n++;
        if((n+1)/2==(pos1))
        {
            cout<<ans+1<<endl;
        }
        else
        {
            ll bal=pos1-1;
            ll sal=n-pos1;
            ll k=(max(bal,sal)-min(bal,sal));
            if(bal>sal)
                n=n+k;
            else
            {
                k=k-1;
                n=n+k;
            }
            ans=n-ini;
            cout<<ans<<endl;
        }
        r0;
    }
    for(int i=0;i<w.sz;i++)
    {
        //cout<<"ini->"<<ini<<" "<<w[i]<<endl;
        ll an=0,bal,sal,k,p;
        n=ini;
        if(w[i]==(ini+1)/2)
        {
            cout<<"0";
            r0;
        }
        p=w[i];
        bal=p-1;
        sal=n-p;
        k=(max(bal,sal)-min(bal,sal));
        if(bal>sal)
            n=n+k;
        else
        {
            k=k-1;
            n=n+k;
        }
        an=n-ini;
        ans=min(an,ans);
    }
    cout<<ans<<endl;
}
