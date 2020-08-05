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
vector<int>v[200005];
bool visited[200005]={0};
int b=1;
void dfs(bool visited[],vector<int>v[],int node)
{
    visited[node]=1;
    if(v[node].sz!=2 ){
        b=0;
    }
    for(int i=0;i<v[node].sz;i++){
        if(!visited[v[node][i]]){
            dfs(visited,v,v[node][i]);
        }
    }
}
main()
{
    int n,m,a=0;
    ne n;ne m;
    for(int i=0;i<m;i++){
        int a,b;ne a;ne b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i])
        {
            b=1;
            dfs(visited,v,i);
            a=a+b;
        }
    }
    de a;nl;
}
