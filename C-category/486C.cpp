/*        HEY YOU!
      WHY ARE YOU HERE?    */
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
int main()
{
    ll n,p,ans=0;string s;cin>>n>>p>>s;
    ll h=(n+1)/2;h--;p--;
    if(p<=h){
        ll in=p;
        for(int i=p;i<=h;i++){
            if(s[n-i-1]!=s[i]){
                in=i;
                ll t,y;
                char a,b;
                a=s[i];b=s[n-i-1];
                t=abs(s[n-i-1]-s[i]);
                y=26-abs(s[n-i-1]-s[i]);
                t=min(t,y);
                s[i]=s[n-i-1];
                ans+=t;
            }
        }
        ll b=abs(in-p);
        in=p;
        for(int i=p;i>=0;i--)
        {
            if(s[n-i-1]!=s[i]){
                in=i;
                ll t,y;
                char a,b;
                a=s[i];b=s[n-i-1];
                t=abs(s[n-i-1]-s[i]);
                y=26-abs(s[n-i-1]-s[i]);
                t=min(t,y);
                t=min(t,y);
                ans+=t;
            }
        }
        ll c=abs(in-p);
        ans+=min(2*b+c,2*c+b);
        de ans;
    }
    else{
        ll in=p;
        for(int i=p;i>h;i--){
            if(s[n-i-1]!=s[i]){
                in=i;
                ll t,y;
                char a,b;
                a=s[i];b=s[n-i-1];
                t=abs(s[n-i-1]-s[i]);
                y=26-abs(s[n-i-1]-s[i]);
                t=min(t,y);
                s[i]=s[n-i-1];
                ans+=t;
            }
        }
        ll b=abs(in-p);
        in=p;
        for(int i=p;i<n;i++)
        {
            if(s[n-i-1]!=s[i]){
                in=i;
                ll t,y;
                char a,b;
                a=s[i];b=s[n-i-1];
                t=abs(s[n-i-1]-s[i]);
                y=26-abs(s[n-i-1]-s[i]);
                t=min(t,y);
                ans+=t;
            }
        }
        ll c=abs(in-p);
        ans+=min(2*b+c,2*c+b);
        de ans;
    }
}
