#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<char,ll> ml;
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
int n,k,m;
string s,t,a;
bool onami()
{
    t=s;
    for(int i=0;i<n;i++){
        if(i<k){
            a.pb(s[i]);
        }
        s[i]=s[i%k];
    }
    m=a.sz;
    if(s>=t)return true;
    return false;
}
main()
{
    cin>>n>>k>>s;
    de n;nl;
    if(onami()){
        de s;r0
    }
    bool f=0;
    for(int i=m-1;i>=0;i--){
        if(f){
            s[i]=a[i];
            int in=i;
            while(1){
               in=in+k;
               if(in>=n)break;
               s[in]=s[i];
            }
        }
        else if(a[i]=='9'){
            s[i]='0';
            int in=i;
            while(1){
               in=in+k;
               if(in>=n)break;
               s[in]=s[i];
            }
        }
        else{
            s[i]=a[i]+1;
            int in=i;
            while(1){
               in=in+k;
               if(in>=n)break;
               s[in]=s[i];
            }
            f=1;
        }
    }
    de s;
}

