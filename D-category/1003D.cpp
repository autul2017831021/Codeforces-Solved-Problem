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
#define mone printf("-1 ")
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
    ll n,q;ne n;ne q;
    ml m;ml ::reverse_iterator it;
    for(int i=0;i<n;i++){
        ll x;ne x;
        m[x]++;
    }
    while(q--)
    {
        ll x;ne x;
        ll xx=x;
        ll ans=0;
        for(it=m.rbg;it!=m.ren;it++)
        {
            if(itf==x){
                ans++;
                x=0;
                break;
            }
            else if(itf<x)
            {
                ll d=x/itf;
                ///de x;sp;de itf;sp;de d;nl;
                if(d<=its){
                    x=x-(d*itf);
                    ans=ans+(d);
                }
                else{
                   x=x-(itf*its);
                   ans=ans+(its);
                }
            }
            if(x==0)
                break;
        }
        if(x==0){
            de ans;nl;
        }
        else{
            mone;nl;
        }
    }
}
