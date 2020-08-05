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
    ll test,ans=0;
    cin>>test;
    vector<ll>v,w;
    for(int i=0;i<test;i++)
    {
        ll a;
        cin>>a;
        v.pb(a);
        w.pb(a);
    }
    sort(v.bg,v.en);
    sort(w.rbg,w.ren);
    for(int i=0;i<test;i++)
    {
        ll x=(v[i]*w[i]);
        ans=(ans+x)%10007;
    }
    cout<<ans<<endl;
}

