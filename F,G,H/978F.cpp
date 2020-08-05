#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
#define inf 100000000000
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
ll kor(ll a[],ll x,ll n)
{
    ll l=1,r=n,mid;ll in=1;
    while(r>=l){
        mid=(l+r)/2;
        if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
            in=mid-1;
        }
    }
    return in;
}
int main()
{
    ll n,k;ne n;ne k;
    ll v[n+3],w[n+3];
    ll a[n+3]={0};
    for(int i=1;i<=n;i++){
        ne v[i];
        w[i]=v[i];
    }
    while(k--){
        ll e,r;ne e;ne r;
        if(v[e]>v[r])a[e]--;
        if(v[r]>v[e])a[r]--;
    }
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++){
        ll x=w[i];
        /// ll in=lower_bound(v+1,v+n+1,x)-(v+1);
        ll in=kor(v,x,n);
        a[i]+=(in);
    }
    for(int i=1;i<=n;i++){
        de a[i];sp;
    }nl;
}
