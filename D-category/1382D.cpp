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
vc v;
ll n;
bool hoise()
{
    ll dp[v.sz+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<v.sz;i++){dp[i][0]=1;dp[i][v[i]]=1;}
    for(int i=1;i<v.sz;i++){
        for(int j=1;j<=n;j++){
            if(v[i]>=j){
                dp[i][j]=max(dp[i-1][j],dp[i][j]);
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]);
            }
        }
    }
    for(int i=0;i<v.sz;i++){
        if(dp[i][n])
            return true;
    }
    return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ne n;
        ll a[2*n+5],m=2*n;
        v.clear();
        for(int i=1;i<=2*n;i++){
            ll x;ne x;
            a[x]=i;
        }
        for(int i=2*n;i>0;i--)
        {
            if(a[i]<=m)
            {
                v.pb(m-a[i]+1);
                m=a[i]-1;
            }
        }
        sort(v.bg,v.en);
        if(hoise())yes;
        else no;
    }
}
