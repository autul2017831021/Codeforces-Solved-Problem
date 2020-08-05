#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
vc v;
void pf(ll n)
{
    set<ll>s;
    set<ll>::iterator it;
    while (n%2==0)
    {
        s.insert(2);
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            s.insert(i);
            n=n/i;
        }
    }
    if (n>2)
    {
       s.insert(n);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        v.pb((*it));
    }

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
ll high(ll n,ll m)
{
    ll i=1;ll an=0;
    while(1)
    {
        if(Pow(m,i)>n)
        {
            break;
        }
        else if(Pow(m,i)%m==0)
        {
            an=i;
            i++;
        }
        else
            break;
    }
    return an;

}
void kor(ll x,ll n)
{
    ll a=1;
    for(ll i=0;i<v.sz;i++)
    {
        ll bal=v[i];
        if(n>=bal)
        {
            ll hi=high(n,bal);nl;
            ll ager=0;ll d=0;ll gun=0;
            for(ll j=hi;j>=1;j--)
            {
                ll num=Pow(bal,j);
                ///cout<<bal<<"^"<<j;de " = ";de num;nl;
                d=n/num;
                ///cout<<"d not minus = "<<d;nl;
                d=d-ager;
                ///cout<<"d = "<<d;nl;
                ager=ager+d;
                ll sal=j*d;
                ///cout<<j<<"*"<<d<<endl;
                gun=gun+sal;
            }
            ///de "total power->";de gun;nl;
            a=a*(bigmod(bal,gun)%mod);
            a=a%mod;
        }
    }
    de a;
    nl;
}
main()
{
   ll x,n;ne x;ne n;
   pf(x);
   kor(x,n);
}
/*
3 60
60/3^3=2
60/3^2=6-2;
60/3=20-2-4;
(3^3)^2 * (3^2)^4 * (3^1)^14=3^28
*/
