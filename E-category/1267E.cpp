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
#define inf 1000000000000
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
bool pusu(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b)
{
    if(a.F.S>b.F.S || (a.F.S==b.F.S && a.F.F<b.F.F))return true;
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
bool onami(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b)
{
    if(a.F.F<b.F.F || (a.F.F==b.F.F && a.F.S>b.F.S))return true;
    return false;
}
int main()
{
    ll n,m,ans=inf;
    scanf("%lld%lld",&n,&m);
    vector<ll>v[200],p;
    int a[200]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ll c;cin>>c;
            v[i].pb(c);
            a[j]+=c;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        ll bal=a[i],sal=a[n-1];
        vp w;
        vc b,c;
        for(int j=0;j<m;j++){
            w.pb({v[j][n-1]-v[j][i],j+1});
        }
        if(a[i]>=a[n-1]){p.clear();break;}
        sort(w.rbg,w.ren);
        for(int j=0;j<w.sz;j++){
            if(bal>=sal)break;
            bal-=v[w[j].S-1][i];
            sal-=v[w[j].S-1][n-1];
            b.pb(w[j].S);
        }
        if(b.sz<ans){
            ans=b.sz;
            p.clear();
            for(int j=0;j<b.sz;j++){
                p.pb(b[j]);
            }
        }
    }
    de p.sz;nl;
    for(int i=0;i<p.sz;i++){
        de p[i];sp;
    }
}

