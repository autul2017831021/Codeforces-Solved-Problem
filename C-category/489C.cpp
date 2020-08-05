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
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1");
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
main()
{
    ll m;ne m;
    ll sum;ne sum;
    if(9*m<sum || sum==0)
    {
        if(m==1)
        {
            de "0 0";r0
        }
        de "-1 -1";r0
    }
    ll sal=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i==1)
            {
                if(j>0)
                {
                   if(9*(m-i)>=(sum-sal-j))
                   {
                       sal+=j;
                       de j;
                       break;
                   }
                }
            }
            else
            {
                if(9*(m-i)>=(sum-sal-j))
                {
                    sal+=j;
                    de j;
                    break;
                }
            }
        }
    }sp;
    vc v;
    ll d=sum/9;
    for(int i=0;i<d;i++)
        v.pb(9);
    v.pb(sum%9);
    for(int i=d+1;i<m;i++)
        v.pb(0);
    for(int i=0;i<m;i++)
        de v[i];
}
