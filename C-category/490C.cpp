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
int x;
bool onami(string s,ll a,ll b)
{
    ll n=s.sz,rem=0,p=0;
    int l[n+2],r[n+2];
    for(int i=0;i<n-1;i++){
        rem=(rem*10+s[i]-'0')%a;
        l[i]=rem;
    }rem=0;
    for(int i=n-1;i>=0;i--){
        ll c=s[i]-'0';ll yonko=bigmod(10,p,b);yonko=c*yonko;rem=(rem+yonko%b)%b;
        r[i]=rem;
        p++;
    }
    for(int i=0;i<n-1;i++){
        if(l[i]==0 && r[i+1]==0 && s[i+1]!='0'){x=i;return true;}
    }
    return false;
}
int main()
{
    string s;
    ll a,b;
    cin>>s>>a>>b;
    if(onami(s,a,b)){
        yes;
        for(int i=0;i<s.sz;i++){de s[i];if(x==i)nl;}
    }
    else no;
}
