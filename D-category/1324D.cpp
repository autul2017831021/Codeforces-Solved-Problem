/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
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
#define inf 1000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
string ntos(ll n) {
     OS str1 ;
     str1 << n ;
     return str1.str();
}
ll ston(string s) {
     ll x ;
     SS str1(s);
     str1 >> x ;
     return x ;
}
ll bigmod(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y=y>>1;
        x= (x*x)%mod;
    }
    return res;
}
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
void kor(vc v,ll n)
{
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>0)
        {
            ans+=(n-1-i);
            //de (n-1-i);nl;
        }
        else
        {
            ll l=i+1;
            ll r=n-1;
            ll m;
            while(r>=l)
            {
                m=(l+r)/2;
                if(v[i]+v[m]>0)
                {
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            ans+=(n-1-r);
            //de (n-1-r+1);sp;de r;nl;
        }
    }
    de ans;nl;
}
main()
{
    ll n,m;ne n;
    vc a,b,v;
    for(int i=0;i<n;i++)
    {
        ll x;ne x;a.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        ll x;ne x;b.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        v.pb(a[i]-b[i]);
    }
    sort(v.bg,v.en);
    kor(v,n);
}
