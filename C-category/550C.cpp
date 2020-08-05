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
#define yes printf("YES\n");
#define no printf("NO\n");
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
void kor()
{

}
main()
{
    string s;ne s;
    ll l=s.sz;
    /// 1 digit
    for(int i=0;i<l;i++)
    {
        if(s[i]=='8')
        {
            de "YES";nl;
            de "8";r0
        }
        else if(s[i]=='0'){
            de "YES";nl;
            de "0";r0
        }
    }
    /// 2 digits
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            string t;
            t.pb(s[i]);
            t.pb(s[j]);
            ll x=ston(t);
            if(x%8==0){de "YES";nl;de x;r0}
        }
    }
    /// 3 digits
    for(int i=0;i<l-2;i++)
    {
        for(int j=i+1;j<l-1;j++)
        {
            for(int k=j+1;k<l;k++)
            {
                string t;
                t.pb(s[i]);
                t.pb(s[j]);
                t.pb(s[k]);
                ll x=ston(t);
                if(x%8==0){de "YES";nl;de x;r0}
            }
        }
    }
    cout<<"NO";
}
