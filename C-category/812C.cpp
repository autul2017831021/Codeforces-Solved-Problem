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
#define inf 100000000000
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
/// priority_queue<ll,vector<ll>,greater<ll> >
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
    ll n,m;ne n;ne m;
    vc v;
    ll bal=0,mal=0;
    for(ll i=0;i<n;i++){
        ll x;ne x;
        v.pb(x);
    }
    ll l=1,r=n;
    ll mid;
    while(r>=l)
    {
        mid=(l+r)/2;
        vc a;
        for(ll i=0;i<n;i++){
            ll x=v[i]+(i+1)*mid;
            a.pb(x);
        }
        sort(a.bg,a.en);
        ll c=0,b=0;
        for(int i=0;i<mid;i++){
            if(b+a[i]<=m){
                c++;
                b=b+a[i];
            }
            else{c=0;break;}
        }
        if(c && bal<mid){
            bal=mid;
            mal=b;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        a.clear();
    }
    de bal;sp;de mal;
}
