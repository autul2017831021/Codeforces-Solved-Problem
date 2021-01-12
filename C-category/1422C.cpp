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
#define modd 1000000007
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
int main()
{
    string s;
    ne s;
    ll onami=0,j,yonko,p;
    ll a[s.sz+10]={0};
    ll l=s.sz;
    a[0]=1;
    for(ll i=1;i<=s.sz;i++){
        yonko=bigmod(10LL,i,modd);
        yonko=(yonko*(i+1))%modd;
        a[i]=a[i-1]+yonko;
    }
    for(ll i=0;i<s.sz;i++){
        ///ager substring
        ll n=s[i]-'0';
        j=i-0;
        j=(j*(j+1))/2;
        yonko=(j*bigmod(10LL,l-1-i,modd))%modd;
        yonko=(n*yonko)%modd;
        onami=(onami+yonko)%modd;
        ///porer substring
        p=l-1-i;
        if(p==0)continue;
        yonko=(n*a[p-1])%modd;
        onami=(onami+yonko)%modd;
    }
    de onami;nl;
}

