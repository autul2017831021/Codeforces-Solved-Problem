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
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define r0 return 0;
#define F first
#define S second
#define its (*it).S
#define itf (*it).F
#define inf 10000000000
#define ninf -1000000000
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<int,int>a,pair<int,int>b)
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
    return (a*b)/__gcd(a,b);
}
const int az=2e5+69;
ll n,m,s;
ll ans=0;
bool f[az];
bool ff[az];
vc v[az];
vc g[az];
vc a,z;
void dfs(ll x)
{
    f[x]=1;
    for(int i=0;i<v[x].sz;i++){
        int p=v[x][i];
        if(!f[p]){
            dfs(p);
        }
    }
}
void dfs2(ll x)
{
    if(!ff[x]){z.pb(x);ans++;}
    ff[x]=1;
    for(int i=0;i<v[x].sz;i++){
        int p=v[x][i];
        if(!ff[p]){
            dfs2(p);
        }
    }
}
void solve()
{
    vp x;
    for(int i=0;i<n;i++){
        if(f[i])ff[i]=1;
        else ff[i]=0;
    }
    for(int i=0;i<a.sz;i++){
        z.clear();
        ll p=a[i];ans=0;
        dfs2(p);
        x.pb(make_pair(ans,p));
        for(int j=0;j<z.sz;j++){
            ff[z[j]]=0;
        }
    }
    sort(x.rbg,x.ren);
    ans=0;
    for(int i=0;i<x.sz;i++){
        ll p=x[i].S;
        if(!f[p]){
            ans++;
            dfs(p);
        }
    }
}
int main()
{
    cin>>n>>m>>s;
    s--;
    memset(f,false,sizeof f);
    for(int i=0;i<m;i++){
        ll aa,b;cin>>aa>>b;aa--;b--;
        v[aa].pb(b);
    }
    dfs(s);
    for(int i=0;i<n;i++){
        if(!f[i]){
            a.pb(i);
        }
    }
    solve();
    de ans;nl;
}
