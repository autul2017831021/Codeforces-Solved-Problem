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
#define inf 10000000000
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
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<char,int>a,pair<char,int>b)
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
/*
ll lb(vc a,ll l,ll r,ll x)
{
    ll mid,z=l-1;
    ll in=z;
    ///de  "number = ";de x;nl;
    while(r>=l){
        mid=(l+r)/2;
        if(){
            l=mid+1;
            in=mid;
        }
        else{
            r=mid-1;
            in=mid;
        }
    }
    return in;
}
*/
int main()
{
   int t;ne t;
   while(t--)
   {
        ll n;ne n;ll ans=0;
        ll x;ne x;
        ll a[n+1]={0};
        vc v;
        v.pb(inf);
        for(int i=1;i<=n;i++){
            ll c;ne c;
            if(c==x){ans++;continue;}
            v.pb(c);
            a[i]=1;
        }
        sort(v.rbg,v.ren);
        for(int i=1;i<v.sz;)
        {
            ll c=v[i];
            if(c>=x){
                ans++;
                i++;
            }
            else{
                ll bal=1;bool f=0;
                for(int j=i+1;j<v.sz;j++){
                    bal++;
                    if(bal*v[j]>=x){
                        f=1;i=j+1;
                        ans++;break;
                    }
                }
                if(!f){
                    break;
                }
            }
        }
        de ans;nl;
   }
}
