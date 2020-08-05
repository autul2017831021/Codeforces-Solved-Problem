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
ll lb(ll a[],ll x,ll n)
{
    ll l=1,r=n,mid;
    while(r>=l){
        mid=(l+r)/2;
        de mid;sp;
        if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }nl;
    return mid;
}
int main()
{
    ll n,ans=0,alice=0,bob=0,m=0;
    ne n;
    priority_queue<ll>a,b,d;
    for(int i=0;i<n;i++)
    {
        string s;ll x;ne s;ne x;
        if(s[0]==s[1]){
            if(s[0]=='0'){d.push(x);}
            else{
                m++;
                ans+=x;
                bob++;
                alice++;
            }
        }
        else{
            if(s[0]=='1'){
                a.push(x);
            }
            else{
                b.push(x);
            }
        }
    }
    if(m==0 && min(a.sz,b.sz)==0){
        de m;r0
    }
    ll l=min(a.sz,b.sz);
    while(l>0)
    {
        l--;
        m=m+2;
        ans+=a.top();a.pop();
        ans+=b.top();b.pop();
        alice++;bob++;
    }
    if(a.sz>0){
        while(1)
        {
            if(d.sz==0 && a.sz==0){break;}
            m++;
            ll x;
            if(d.sz>0 && a.sz>0){
                if(d.top()>=a.top()){
                   x=d.top();d.pop();
                }
                else{
                    x=a.top();a.pop();
                }
            }
            else if(a.sz>0){
                x=a.top();a.pop();
            }
            else if(d.sz>0){
                x=d.top();d.pop();
            }
            if(2*alice<m){break;}
            ans+=x;
        }
    }
    else if(b.sz>0){
        while(1)
        {
            if(d.sz==0 && b.sz==0){break;}
            m++;
            ll x;
            if(d.sz>0 && b.sz>0){
                if(d.top()>=b.top()){
                   x=d.top();d.pop();
                }
                else{
                    x=b.top();b.pop();
                }
            }
            else if(b.sz>0){
                x=b.top();b.pop();
            }
            else if(d.sz>0){
                x=d.top();d.pop();
            }
            if(2*alice<m){break;}
            ans+=x;
        }
    }
    else if(d.sz>0){
        while(1){
            m++;
            if(d.sz==0 || 2*alice<m){break;}
            ans=ans+d.top();
            d.pop();
        }
    }
    de ans;
}
