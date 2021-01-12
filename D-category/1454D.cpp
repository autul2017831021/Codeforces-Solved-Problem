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

}
bool isPrime(ll x)
{
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
void D()
{
    ll n;ne n;
    ll N=n;
    if(isPrime(n)){
        de 1;nl;de n;nl;return;
    }
    map<ll,ll>m;
    map<ll,ll>::iterator it;
    while (n%2==0)
    {
        m[2]++;
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            m[i]++;
            n=n/i;
        }
    }
    if (n>2)
    {
       m[n]++;
    }
    n=N;
    vp v;
    vc a;
    for(it=m.begin();it!=m.end();it++)
    {
        v.pb(make_pair(its,itf));
    }
    sort(v.bg,v.en);
    for(int i=0;i<v.sz;i++){
        ll kal=v[i].F;
        for(int j=0;j<kal;j++){
            ll x=1;
            for(int k=i;k<v.sz;k++){
                x=x*v[k].S;
                v[k].F--;
            }
            a.pb(x);
        }
    }
    for(int i=0;i<v[0].F;i++){
        a.pb(v[0].S);
    }
    de a.sz;nl;
    reverse(a.bg,a.en);
    for(int i=0;i<a.sz;i++){
        de a[i];sp;
    }nl;
}
int main()
{
    int t;ne t;
    while(t--)
    {
        //A();
        //B();
        //C();
        D();
    }
}
