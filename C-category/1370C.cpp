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
ll kor(long long n)
{
    vc v;
            for(ll i=1;i<sqrt(n);i++){
                if(n%i==0)
                {
                    if(n%i==i && i>1 && i%2==1){
                        v.pb(i);
                    }
                    else{
                        if(i>1 && i%2){v.pb(i);}
                        if((n/1)>1 && (n/i)%2==1){v.pb(n/i);}
                    }
                }
            }
    return v.sz;
}
main()
{
    int t;ne t;
    while(t--)
    {
        ll n;ne n;
        if(n==1){
            de "FastestFinger";nl;continue;
        }
        if(n%2 || n==2){
            de "Ashishgup";nl;
            continue;
        }
        if(kor(n)==0){
            de "FastestFinger";nl;continue;
        }
        vc v;
            for(ll i=1;i<sqrt(n);i++){
                if(n%i==0)
                {
                    if(n%i==i && i>1 && i%2==1){
                        v.pb(i);
                    }
                    else{
                        if(i>1 && i%2){v.pb(i);}
                        if((n/1)>1 && (n/i)%2==1){v.pb(n/i);}
                    }
                }
            }
        if(v.sz>1){
            de "Ashishgup";nl;continue;
        }
        n=n/v[0];
        if(n==2){
            de "FastestFinger";nl;continue;
        }
        de "Ashishgup";nl;continue;
    }
}
