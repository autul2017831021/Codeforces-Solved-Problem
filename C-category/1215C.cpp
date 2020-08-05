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
main()
{
    int n;ne n;
    string s,t;int c=0,d=0;
    ne s;ne t;
    queue<int>a,b;
    vp v;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(s[i]=='a'){
                a.push(i+1);
                c++;
            }
            else{
                b.push(i+1);
                d++;
            }
        }
    }
    if((c+d)%2!=0){mone;r0}
    while(a.sz>0)
    {
        if(a.sz>1){
           int x,y;
           x=a.front();a.pop();
           y=a.front();a.pop();
           v.pb({x,y});
        }
        if(a.sz==1){
            v.pb({a.front(),a.front()});b.push(a.front());a.pop();
        }
    }
    while(b.sz>0)
    {
        int x,y;
        x=b.front();b.pop();
        y=b.front();b.pop();
        v.pb({x,y});
    }
    de v.sz;nl;
    for(int i=0;i<v.sz;i++){
        de v[i].F;sp;de v[i].S;nl;
    }
}
