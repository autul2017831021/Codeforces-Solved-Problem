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
void kor(ml m,queue<ll>q)
{
    ll t=0,e=0;
    while(!q.empty())
        {
            ll x=q.front();q.pop();
            ///de "map index = ";de m[x]-e;nl;
            if(m[x]-e==0)
            {
                e++;
                t++;
            }
            else
            {
                ll k=m[x]-e;
                e++;
                t+=(2*k+1);
                while(!q.empty())
                {
                    ll y=q.front();
                    if(m[y]>=m[x])
                        break;
                    q.pop();
                    t++;
                    e++;
                }
            }
            ///de "e = ";de e;nl;de "time = ";de t;nl;
        }
        de t;nl;
}
main()
{
    int test;ne test;
    while(test--)
    {
        ll n,M;ne n;ne M;
        ml m;queue<ll>q;
        for(ll i=1;i<=n;i++)
        {
            ll xx;ne xx;
            m[xx]=i-1;
        }
        for(int i=0;i<M;i++)
        {
            ll xx;ne xx;q.push(xx);
        }
        kor(m,q);
    }
}
