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
#define inf 1000000000
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
vc v[200001];
main()
{
    string s;
    ne s;
    ll m=0;
    set<ll>a,o;
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]=='0')
        {
            if(o.sz)
            {
                ll bal=*o.bg;
                v[bal].pb(i+1);
                o.erase(bal);
                a.insert(bal);
            }
            else{
                v[m].pb(i+1);
                a.insert(m);
                m++;
            }
        }
        else
        {
            if(!a.sz){mone;r0}
            ll bal=*a.bg;
            v[bal].pb(i+1);
            a.erase(bal);
            o.insert(bal);
        }
    }
    if(o.sz!=0){
        mone;r0
    }
    de m;nl;
    for(int i=0;i<m;i++)
    {
        de v[i].sz;sp;
        for(int j=0;j<v[i].sz;j++){
            de v[i][j];sp;
        }nl;
    }
}
