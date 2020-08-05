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
ll n,m,a[100010],ans;
bool f[100010]={0};
vector<ll>v[100010];
void DFS(ll x,ll b)
{
    if(b>m)return;
    f[x]=1;
    if(v[x].sz==1 && f[v[x][0]])ans++;
    for(ll i=0;i<v[x].sz;i++){
        ll xx=v[x][i];
        if(!f[xx]){
            ll c=0;
            if(a[xx])c=b+1;
            DFS(xx,c);
        }
    }
}
main()
{
    cin>>n>>m;ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<n;i++){
        ll x,y;cin>>x>>y;x--;y--;
        v[x].pb(y);v[y].pb(x);
    }
    DFS(0,a[0]);
    de ans;
}

