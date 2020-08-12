/*        ASSHOLE
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
#define inf 10000000000000000000
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
int main()
{
    ll n,k,ans=0;
    string s,t;
    cin>>n>>k>>s;
    for(int i=0;i<k;i++){
        t.pb(i+'A');
    }
    if(k==2){
        int bal=0,sal=0;
        string a,b;a.pb('A');b.pb('B');
        for(int i=1;i<n;i++){
            if(i%2)a.pb('B');
            else a.pb('A');
        }
        for(int i=1;i<n;i++){
            if(i%2==0)b.pb('B');
            else b.pb('A');
        }
        for(int i=0;i<n;i++){
            if(s[i]!=a[i])bal++;
            else sal++;
        }
        if(bal>sal)bal=sal,a=b;
        de bal;nl;de a;r0
    }
    s+='a';
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            bool f=1;
            for(int j=0;j<t.sz;j++){
                if(s[i-1]!=t[j] && s[i+1]!=t[j]){ans++;f=0;s[i]=t[j];break;}
            }
            if(f){
                for(int j=0;j<t.sz;j++){
                    if(s[i-1]!=t[j]){ans++;s[i]=t[j];break;}
                }
            }
        }
    }
    s.erase(n,n);
    de ans;nl;de s;nl;
}

