#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
ll a[200000],p[200000],ps[200000];
void power()
{
    p[0]=1;p[1]=1;ps[1]=1;
    for(int i=2;i<=100000;i++){
        p[i]=(p[i-1]*2)%mod;
        ps[i]=(p[i]+ps[i-1])%mod;
    }
}
int main()
{
    ll n,q;
    string s;
    cin>>n>>q>>s;
    a[0]=0;
    for(int i=0;i<n;i++){
        a[i+1]=a[i]+(s[i]-'0');
    }
    power();
    while(q--)
    {
        int l,r;cin>>l>>r;
        ll ans=0;
        ll o=a[r]-a[l]+(s[l-1]-'0');
        ll z=(r-l+1)-o;
        if(o)ans=ps[o];
        ans+=(ans*ps[z])%mod;
        de ans%mod;nl;
    }
}

