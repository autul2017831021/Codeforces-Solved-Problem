/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1");
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
void kor(ll n,ll k,string s)
{
    ll c;ll l=k,r=n-1;string v;bool f=1;v.pb(s[0]);string w;w.pb(s[0]);
    while(f)//for(int i=k;i<n;i++)
    {
        c=0;
        for(int i=l;i<min(l+k,n);i++)
        {
            if(s[i]==s[k])
                c++;
        }
        if(c<k)
        {
            f=0;
        }
        v.pb(s[min(l+k-1,n-1)]);
        l=l+k;
        if(l>=n)
            break;
    }
    for(int i=k;i<n;i++)
        w.pb(s[i]);
    de min(v,w);nl;
}
main()
{
    ll test;ne test;
    while(test--)
    {
        ll n,k;ne n;ne k;ll c=1;
        string s;ne s;
        sort(s.bg,s.en);
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[0])
                c++;
        }
        if(k==1)
        {
            de s;nl;
        }
        else if(n==k)
        {
            de s[n-1];nl;
        }
        else if(c<k)
        {
            de s[k-1];nl;
        }
        else{
            kor(n,k,s);
        }
    }
}
