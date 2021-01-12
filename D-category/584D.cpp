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
const int MX=10000010;
bool prime[MX];
vector<ll>v;
void gomu_gomu(ll M)
{
    prime[0]=prime[1]=true;
    for(ll i=4;i<=M;i=i+2)
        prime[i]=true;
    for(int i=3;i<=sqrt(M);i=i+2)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i;j<=M;j=j+2*i)
                prime[j]=true;
        }
    }v.pb(2);
    for(ll i=3;i<=M;i=i+2)
        {
            if(prime[i]==false)
            {
                v.push_back(i);
            }
        }
}
bool onami(ll x)
{
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    gomu_gomu(1000000);
    ll n;ne n;
    if(onami(n)){
        cout<<"1"<<endl<<n;r0
    }
    n-=3;
    if(onami(n)){
        cout<<"2"<<endl<<"3 "<<n;r0
    }
    de "3";nl;de "3 ";
    for(int i=0;i<v.sz && v[i]<n;i++){
        if(onami(n-v[i])){
            de v[i];sp;de n-v[i];nl;break;
        }
    }
}
