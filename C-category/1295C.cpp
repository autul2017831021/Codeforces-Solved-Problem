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
//#define mod 1000000007
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
int yonko;
string s,t;
vc v[26];
bool nami_san()
{
    for(int i=0;i<26;i++)v[i].clear();
    yonko=0;
    int in=1e6;
    for(int i=0;i<s.sz;i++){v[s[i]-'a'].pb(i);}
    for(int i=0;i<t.sz;)
    {
        if(v[t[i]-'a'].sz==0)return false;
        if(!i){in=v[t[i]-'a'][0];yonko++;i++;continue;}
        int j=-1;
        int l=0,r=v[t[i]-'a'].sz-1,mid=-1;
        while(r>=l){
            mid=(l+r)/2;
            if(v[t[i]-'a'][mid]>in){
                j=mid;
                r=mid-1;
            }
            else{l=mid+1;}
        }
        if(j==-1){in=v[t[i]-'a'][0];yonko++;i++;}
        else{
            in=v[t[i]-'a'][j];i++;
        }
    }
    return true;
}
int main()
{
    int tt;ne tt;
    while(tt--)
    {
        ne s;ne t;
        if(nami_san()){de yonko;}
        else de "-1";
        nl;
    }
}
