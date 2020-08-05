#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        k=3;
        cin>>n;
        ll x=n;
        bool f=1;
        ll a[40]={0};
        ll i=0;
        while(x)
        {
            ll r=x%k;
            x/=k;
            a[i]+=r;
            if(a[i]>1)
                f=0;
            i++;
        }
        if(f)
        {
            cout<<n<<endl;
        }
        else
        {
            vector<ll>v;
            ll ar[45]={0};
            ll in=0;
            while(n>0)
            {
                ll r=n%3;
                n=n/3;
                v.push_back(r);
                ar[in]=r;
                in++;
            }
            ll l=v.size();
            v.clear();
            ll pos=0;
            for(ll j=0;j<l;j++)
            {
                if(ar[j]==2)
                {
                    pos=j;
                }
            }
            ar[pos+1]++;
            for(int i=0;i<=pos;i++)
            {
                ar[i]=0;
            }
            for(int i=pos+1;i<l;i++)
            {
                if(ar[i]==2)
                {
                    ar[i]=0;
                    ar[i+1]++;
                }
            }
            ll ans=0,mx=1;
            for(int i=0;i<44;i++)
            {
                if(ar[i]==1)
                {
                    for(int j=0;j<i;j++)
                    {
                        mx=mx*3;
                    }
                    ans+=mx;
                }
                mx=1;
            }
            cout<<ans<<endl;
        }
    }
}
// 1000000000000000000

