/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<char,int>a,pair<char,int>b)
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
vector<long long>v,a;
void printDivisors(long long n,long long k)
{

    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.sz;i++)
    {
        ll bal=k*(k-1);bal/=2;
        bal=v[i]*bal;
        if(bal<n && (n-bal)>(k-1)*v[i]  && (n-bal)%v[i]==0){
            for(ll ii=1;ii<k;ii++){
                a.pb(ii*v[i]);
            }
            a.pb(n-bal);break;
        }
    }
    if(!a.sz){mone;return;}
    for(ll i=0;i<k;i++){
        de a[i];sp;
    }
}
int main()
{
    ll n,k;ne n;ne k;
    ll ans=(k*(k+1))/2;
    if(ans>n || k>141420){mone;r0}
    printDivisors(n,k);
}
