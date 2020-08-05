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
void DFS(bool f[],vector<ll>v[],ll n)
{
    f[n]=1;
    for(ll i=0;i<v[n].sz;i++){
        ll x=v[n][i];
        if(!f[x]){
            DFS(f,v,x);
        }
    }
}
main()
{
    ll n,c=0;ne n;
    bool f[110]={0};
    vector<ll>v[110];
    for(int i=0;i<n;i++)
    {
        string s;ne s;
        if(s.sz==1){
            v[s[0]-'a'].pb(s[0]-'a');
            continue;
        }
        for(int j=0;j<s.sz-1;j++){
            v[s[j]-'a'].pb(s[j+1]-'a');
            v[s[j+1]-'a'].pb(s[j]-'a');
        }
    }
    for(ll i=0;i<26;i++){
        if(!f[i] && !v[i].empty()){
            DFS(f,v,i);
            c++;
        }
    }
    de c;nl;
}

