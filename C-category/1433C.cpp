#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
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
main()
{
    int t;ne t;
    while(t--)
    {
        ll n;ne n;
        vc v,a;
        ll aa=-1;
        ll num=0;
        ml m;
        for(int i=1;i<=n;i++){
            ll c;ne c;
            v.pb(c);
            a.pb(c);
        }
        sort(a.bg,a.en);
        if(a[0]!=a[n-1]){
            for(int i=0;i<n;i++){
                if(i==0){
                    if(v[i]==a[n-1] && v[i]>v[i+1]){
                        aa=i+1;break;
                    }
                }
                else if(i==n-1){
                    if(v[i]==a[n-1] && v[i]>v[i-1]){
                        aa=i+1;break;
                    }
                }
                else{
                    if(v[i]==a[n-1] && v[i]>v[i+1]){
                        aa=i+1;break;
                    }
                    if(v[i]==a[n-1] && v[i]>v[i-1]){
                        aa=i+1;break;
                    }
                }
            }
        }
        de aa;nl;
    }
}

