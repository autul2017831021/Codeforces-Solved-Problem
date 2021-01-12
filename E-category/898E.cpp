/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
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
#define inf 10000000000000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
ll Pow(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x);
        y=y>>1;
        x= (x*x);
    }
    return res;
}
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
main()
{
    ll n,ans=0;ne n;
    vc v,a,b;
    for(int i=1;i<=n;i++){
        ll x;ne x;
        v.pb(x);
    }
    sort(v.bg,v.en);
    for(int i=0;i<v.sz;i++)
    {
        if(v[i]==0){a.pb(0);}
        else{
            ll x=sqrt(v[i]);ll y=x+1;
            if(x*x==v[i]){a.pb(v[i]);}
            else{
                x=min((v[i]-x*x),(y*y-v[i]));
                b.pb(x);
            }
        }
    }
    if(b.sz>a.sz){
        ll lagbe=b.sz-(n/2);
        sort(b.bg,b.en);
        for(int i=0;i<lagbe;i++){
            ans+=b[i];
        }
    }
    else if(a.sz>b.sz){
        ll lagbe=a.sz-(n/2);
        sort(a.rbg,a.ren);
        for(int i=0;i<lagbe;i++){
            ans++;
            if(a[i]==0)ans++;
        }
    }
    de ans;nl;
}
