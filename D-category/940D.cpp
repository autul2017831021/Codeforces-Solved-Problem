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
void kor()
{
   ll n;ne n;ll l=ninf;ll r=inf;
    vc v;string b;
    for(int i=0;i<n;i++){ll x;ne x;v.pb(x);}ne b;
    for(int i=4;i<n;i++)
    {
        if(b[i]=='1')
        {
            if(b[i-1]==b[i-2] && b[i-1]==b[i-3] && b[i-1]==b[i-4] && b[i-1]!=b[i])
            {
                //de i;sp;de "left";nl;
                for(int j=0;j<5;j++){
                    l=max(l,v[i-j]);
                    //de v[i-j];sp;
                }
            }
        }
        else
        {
            if(b[i-1]==b[i-2] && b[i-1]==b[i-3] && b[i-1]==b[i-4] && b[i-1]!=b[i])
            {
                //de i;sp;de "right";nl;
                for(int j=0;j<5;j++){
                    r=min(r,v[i-j]);
                    //de v[i-j];sp;
                }
            }
        }
    }
    de l+1;sp;de r-1;nl;
}
main()
{
    kor();
}
