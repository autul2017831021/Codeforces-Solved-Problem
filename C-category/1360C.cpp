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
        ll n;ne n;
        vc v;
        for(int i=0;i<n;i++)
        {
            ll x;ne x;
            v.pb(x);
        }
        sort(v.bg,v.en);
        ll e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2)
                o++;
            else
                e++;
        }
        if(e%2==0 && o%2==0)
        {
            de "YES";nl;continue;
        }
        ll bal=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]==1)
                bal++;
        }
        bool f=0;
        while(1)
        {
            if(bal==0 || f==1)
            {
                break;
            }
            bal--;
            e--;
            o--;
            if(e%2==0 && o%2==0)
            {
                f=1;
            }
        }
        if(f)
        {
            de "YES";nl;
        }
        else
        {
            de "NO";nl;
        }
    }
}
