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
#define mone printf("-1 ")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
///priority_queue<ll,vector<ll>,greater<ll> >q;
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
    int t;ne t;
    while(t--)
    {
        ll n,k;ne n;ne k;ll ans=0;
        string s;ne s;
        vc v;
        v.pb(ninf);
        for(ll i=0;i<s.sz;i++){
            ll x=s[i]-'0';
            if(x==1)
                v.pb(i);
        }
      if(v.sz>1)
      {
        for(ll i=1;i<v.sz;i++)
        {
            ll pv,pr;
            pv=v[i-1];
            pr=v[i];
            while(1){
                ll bal=pr-k-1;
                if(pv+k<bal && bal>=0){
                    ans++;
                    pr=bal;
                }
                else{
                    break;
                }
            }
            pr=v[i];
            if(i==v.sz-1){
                while(1){
                    ll bal=pr+k+1;
                    if(bal>=n){
                        break;
                    }
                    ans++;
                    pr=bal;
                }
            }
        }
      }
      else{
            ll bal=0;
        for(int i=0;i<n;i++){
            if(i==0){
                ans++;
            }
            else if(i==bal+k+1){
                ans++;
                bal=i;
            }
        }
      }
        ///de "ans = ";sp;
        de ans;nl;
    }
}
