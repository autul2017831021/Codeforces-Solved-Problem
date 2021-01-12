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
//#define modd 1000000007
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
const int MX=10000001;
ll v[MX+10]={0};
ll w[MX+10]={0};
void onami(ll M)
{
    for(int i=3;i<=M;i=i+2){
        if(v[i]==0){
            for(ll j=i+i;j<=M;j=j+i){
                if(v[j]==0)
                    v[j]=i;
                else if(w[j]==0)
                    w[j]=i;
            }
        }
    }
}
int main()
{
    onami(10000000);
    int n;
    ne n;
    vc a,b;
    for(int i=0;i<n;i++){
        ll x,y;ne x;y=x;
        if(x%2==0)
        {
            while(x%2==0){x/=2;}
            if(x!=1){
                a.pb(x);b.pb(2);
            }
            else{a.pb(-1);b.pb(-1);}
        }
        else{
            if(min(v[x],w[x])==0){a.pb(-1);b.pb(-1);}
            else {a.pb(v[x]);b.pb(w[x]);}
        }
    }
    for(int i=0;i<n;i++){
        de a[i];sp;
    }nl;
    for(int i=0;i<n;i++){
        de b[i];sp;
    }nl;
    r0
}
