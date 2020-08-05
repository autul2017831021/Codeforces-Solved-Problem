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
void kor()
{
    ll n;ne n;ll m=0,a=0,b=0;bool shesh=0;ll j=0,k=n;queue<ll>q;bool f=1,g=0;ll can=0;ll ta=0,tb=0;
    vc v;
    for(int i=0;i<n;i++){
        ll x;ne x;v.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        m++;
        if(f)
        {
           ta=0;
           f=0;ll bal=0;
           if(i==0)
           {
               m++;
               a=a+v[i];
               j=i;
               can++;
               ta=a;
           }
           else
           {
               for(int ii=j+1;ii<k;ii++)
               {
                   bal=bal+v[ii];
                   can++;
                   if(bal>tb)
                   {
                       a=a+bal;
                       j=ii;ta=bal;
                       break;
                   }
                   else if(can==n){
                      a+=bal;j=ii;ta=bal;break;
                   }

               }
           }
        }
        else
        {
           tb=0;
           f=1;ll bal=0;
           for(int ii=k-1;ii>j;ii--)
           {
               bal+=v[ii];
               can++;
               if(bal>ta)
               {
                   b=b+bal;
                   k=ii;tb=bal;break;
               }
               else if(can==n){
                  b=b+bal;k=ii;tb=bal;
                  break;
               }
           }
        }
        if(can==n){
            break;
        }
    }
    //de "ans->";sp;
    de m-1;sp;de a;sp;de b;nl;
}
main()
{
    ll test;ne test;
    while(test--)
    {
        kor();
    }
}
