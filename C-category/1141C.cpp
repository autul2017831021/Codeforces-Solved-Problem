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
#define inf 1000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n");
#define no printf("NO\n");
#define mone printf("-1 ")
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
    ll n;ne n;
    ll s=(n*(n+1))/2;
    ll q[n+10]={0},a[n+10]={0};
    for(int i=1;i<n;i++){
        ne q[i];
        a[i]=a[i-1]+q[i];
    }
    ll x=0;
    x=accumulate(a,a+n,0LL);
    s=s-x;
    dl d=s/(n+0.0);
    if( (d<0 || d>n) && floor(d)!=ceil(d)){
        mone;r0
    }
    vc v;
    ll r=d;
    v.pb(r);
    for(int i=1;i<n;i++){
        r=r+q[i];
        v.pb(r);
    }
    ml m;
    for(int i=0;i<v.sz;i++){
        m[v[i]]++;
    }
    bool f=1;
    for(int i=1;i<=n;i++){
        if(m[i]!=1){
            mone;r0
        }
    }
    for(int i=0;i<v.sz;i++){
        de v[i];sp;
    }
}
