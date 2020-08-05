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
#define inf 100000000000
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
int main()
{
    int t;ne t;
    while(t--)
    {
        ll n,boro=10,choto=0,f=1;ne n;
        string s;ne s;
        ml m;ml ::iterator it;
        ll ans[n];
        vc a,b;
        for(int i=0;i<n;i++){
            ll x=s[i]-'0';m[x]++;
        }
        for(int i=0;i<n;i++)
        {
            ll x=s[i]-'0',y=0;
            m[x]--;
            for(int j=0;j<x;j++){
                ///de j;sp;de m[j];nl;
                if(m[j]>0){
                    y=1;boro=min(boro,x);
                    break;
                }
            }
            if(!y && (boro==10 || x<=boro)){ans[i]=1;a.pb(x);}
            else{ans[i]=2;b.pb(x);}
        }
        for(int i=0;i<b.sz;i++){
            a.pb(b[i]);
        }
        for(int i=1;i<a.sz;i++){
            if(a[i]<a[i-1]){f=0;break;}
        }
        if(!f){
            de "-";nl;
        }
        else{
            for(int i=0;i<n;i++){
                de ans[i];
            }nl;
        }
    }
}

