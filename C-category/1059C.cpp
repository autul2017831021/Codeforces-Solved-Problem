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
    ll n;ne n;if(n==3){de "1 1 3";r0}
    vc e,v,w;
    ll p[20];
    p[0]=2;
    for(ll i=1;i<20;i++)
    {
        p[i]=p[i-1]*2;
        //de p[i];sp;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2)
            v.pb(1);
        else
            e.pb(i);
    }
    for(int i=0;i<19;i++)
    {
        ll now=0,next=0;
        for(int j=0;j<e.sz;j++)
        {
            if(e[j]%p[i]==0)
            {
                now++;
            }
        }
        if(now>1)
        {
            vc vv;
            for(int j=0;j<e.sz;j++)
            {
                if(e[j]%p[i]==0)
                {
                    vv.pb(e[j]);
                }
                else{
                    w.pb(p[i-1]);
                }
            }
            e.clear();
            for(int ii=0;ii<vv.sz;ii++)
                e.pb(vv[ii]);
        }
        else if(now==1)
        {
            for(int j=0;j<e.sz-1;j++)
            {
                w.pb(p[i-1]);
            }
            w.pb(e[e.sz-1]);
            e.clear();
        }
        else{
            break;
        }
    }
    for(int i=0;i<v.sz;i++)
    {
        de v[i];sp;
    }
    for(int i=0;i<w.sz;i++)
    {
        de w[i];sp;
    }
}

