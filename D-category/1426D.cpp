#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define inf 10000000000
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
#define modd 998244353
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.F<b.F || (a.F==b.F && a.S>b.S))return true;
    return false;
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
ll bigmod(ll x, ll y,ll mod)
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
int main()
{
    int tt;
    tt=1;
    for(int ii=0;ii<tt;ii++)
    {
        ll n,s=0;ne n;
        vc v;
        ll a[n+5];
        a[0]=0;
        ll ans=0;
        ml m;
        for(int i=1;i<=n;i++){
            ll x;ne x;
            v.pb(x);
            a[i]=(a[i-1]+x);
            s+=x;
            if(s==0){
                if(x>0){
                    s=x;
                }
            }
        }
        m[0]++;
        ll bal=0,sal=0;
        for(int i=1;i<=n;i++){
            sal+=v[i-1];
            m[sal]++;
            if(m[sal]>1){
                ans++;
                //de i;sp;de v[i-1];nl;
                m.clear();
                m[0]++;
                m[v[i-1]]=1;
                sal=v[i-1];
            }
        }
        de ans;nl;
    }
}

