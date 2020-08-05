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
#define inf 1000000007
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
#define mone printf("-1 ");
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
void kor(ll n)
{
    vc o,e;
    for(int i=n;i>6;i--)
    {
       if(i%2)
         o.pb(i);
    }
    o.pb(3);o.pb(1);o.pb(5);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            e.pb(i);
        }
    }
    for(int i=0;i<o.sz;i++){
        de o[i];sp;
    }
    for(int i=0;i<e.sz;i++){
        de e[i];sp;
    }
    nl;
}
main()
{
    ll test;ne test;
    while(test--)
    {
        ll n;ne n;
        if(n==2 || n==3)
        {
            mone;nl;
        }
        else if(n==4)
        {
            de "3 1 4 2";nl;
        }
        else{
            kor(n);
        }
    }
}
