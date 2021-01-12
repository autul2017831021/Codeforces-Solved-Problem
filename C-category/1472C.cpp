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
#define inf 1000000000000000000
#define ninf -1000000000
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/* priority_queue<ll,vector<ll>,greater<ll> > */
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
void A()
{
    
}
void B()
{

}
void C()
{
    ll n;ne n;
    vc v;
    v.pb(0);
    for(int i=0;i<n;i++){
        ll c;ne c;v.pb(c);
    }
    ll ans=0;
    bool f[n+10]={0};
    ll a[n+100]={0};
    for(int i=1;i<=n;i++){
        if(f[i]){
            continue;
        }
        ll j=i;
        ll bal=v[i];
        a[i]=bal;
        vc x;
        x.pb(i);
        while(j+v[j]<=n){
            j=j+v[j];
            if(f[j]){
                bal=bal+a[j];
                break;
            }
            x.pb(j);

            bal=bal+v[j];
            f[j]=1;
        }
        a[i]=bal;
        for(int ii=1;ii<x.sz;ii++){
            ll aga=a[x[ii-1]]-v[x[ii-1]];
            a[ii]=aga;
        }
        ans=max(ans,bal);
    }
    de ans;nl;
}
void D()
{

}
int main()
{
    int t;ne t;
    while(t--){
        C();
    }
}
