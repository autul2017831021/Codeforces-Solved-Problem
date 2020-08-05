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
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
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
    ll test;ne test;
    while(test--)
    {
        ll n,m,a,b;
        ne n;bool f=0;
        char ar[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                char x;ne x;
                ar[i][j]=x;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ar[i][j]!='0')
                {
                   ll c=0 ;
                   if(j+1<n && ar[i][j+1]!='1')c++ ;
                   if(i+1<n&& ar[i+1][j]!='1')c++ ;
                   if(c==2)
                   {
                      f=1;
                      break ;
                   }
               }
            }
        }
        if(f)
        {
            de "NO";nl;
        }
        else{
            de "YES";nl;
        }
    }
}
