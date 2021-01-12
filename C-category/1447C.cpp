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
    return (a*b)/(__gcd(a,b));
}
int main()
{
    int t;ne t;
    while(t--)
    {
        ll n,w,h;
        cin>>n>>w;
        h=w/2+w%2;
        vp v;vc a;
        bool f=0;
        for(int i=0;i<n;i++){
            ll c;ne c;
            if(c>=h && c<=w && f==0){
                f=1;
                a.pb(i+1);
            }
            v.pb(make_pair(c,i+1));
        }
        if(f){
            de 1;nl;de a[0];nl;continue;
        }
        sort(v.bg,v.en);
        ll ans=0;
        for(int i=0;i<n;i++){
            ans=ans+v[i].F;
            a.pb(v[i].S);
            if(ans>=h && ans<=w){
                f=1;break;
            }
        }
        if(f){
            de a.sz;nl;
            for(int i=0;i<a.sz;i++){
                de a[i];sp;
            }nl;
        }
        else mone;
    }
}
