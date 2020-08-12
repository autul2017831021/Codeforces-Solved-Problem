/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
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
#define inf 10000000000000000000
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
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
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
ll a[300005],b[300005];
ll n,k,bal=0,shuru,shesh,ans=0;
ll upper(ll l,ll r)
{
    ll mid,i=l,x=l;
    while(r>=l)
    {
        mid=(l+r)/2;
        ll c=0;
        if(!a[x])c=1;
        if(b[mid]-b[x]+c>k){
            r=mid-1;
        }
        else{
            i=mid;
            l=mid+1;
        }
    }
    return i;
}
main()
{
    ne n;ne k;
    for(int i=0;i<n;i++){
        ne a[i];
        if(!a[i])bal++;
        b[i]=bal;
    }
    for(int i=0;i<n;i++)
    {
        ll j=upper(i,n-1);
        ll sal=j-i+1;
        if(sal>ans)
        {
            shuru=i;shesh=j;
            ans=sal;
        }
    }
    if(k==0){
        shuru=-1,shesh=-1;
        if(bal==n)ans=0;
    }
    de ans;nl;
    for(int i=0;i<n;i++)
    {
        if(i>=shuru && i<=shesh)a[i]=1;
        de a[i];sp;
    }nl;
}
