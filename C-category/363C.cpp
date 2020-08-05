/*    YOU VIRGIN ASSHOLE
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
/*
int lb(ll l,ll r,ll x,ll n)
{
    ll mid;
    ll in=-1;
    while(r>=l){
        mid=(l+r)/2;
        if((n/v[mid])<x){
            r=mid-1;
        }
        else{
            l=mid+1;
            in=mid;
        }

    }
    return in;
}
*/
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
    string s,t;
    ne s;
    int p,c=1;
    t.pb(s[0]);
    p=s[0]-'a';
    for(int i=1;i<s.sz;i++){
        if(s[i]-'a'==p){
            c++;
        }
        else{
            c=min(c-1,1);
            for(int j=0;j<c;j++){
                t.pb(p+'a');
            }
            p=s[i]-'a';
            c=1;
            t.pb(s[i]);
        }
    }
    if(c>1){
        t.pb(p+'a');
    }
    for(int i=0;i<t.sz-1;i++){
        if(t[i]==t[i+1]){
            if(i+3<t.sz && t[i+2]==t[i+3]){
                t[i+2]='?';
            }
        }
    }
    for(int i=0;i<t.sz;i++){
        if(t[i]!='?'){
            de t[i];
        }
    }
}
