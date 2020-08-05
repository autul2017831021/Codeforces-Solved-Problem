/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
#define yes printf("YES\n");
#define no printf("NO\n");
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
void kor(ll n,ll m)
{
    vc v;bool f=1;
    while(1)
    {
        if(f)
        {
            f=0;
            if(m-2>=n && m>0){
                v.pb(11);m=max((ll)0,m-2);
            }
            else if(m>0){
                v.pb(1);m=((ll)0,m-1);
            }
        }
        else
        {
           f=1;
           if(n>0)
           v.pb(0);
           n=max((ll)0,n-1);
        }
        if(m==0 && n==0)
            break;
    }
    for(int i=0;i<v.sz;i++)
        de v[i];
    nl;
}
main()
{
    ll n,m;ne n;ne m;
    if(n>m || m>2*n+2)
    {
        if(n-m==1)
        {
            de "0";
            for(int i=0;i<m;i++)
                de "10";
            r0
        }
        de "-1";r0
    }
    kor(n,m);
}
