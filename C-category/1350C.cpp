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
vc a[200001];
ll oc[200001];
ml f;
void primeFactors(long long n)
{
    ml m;
    while (n%2==0)
    {
        m[2]++;
        f[2]++;
        n=n/2;
    }
    if(m[2]>0){oc[2]++;a[2].pb(m[2]);}
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            m[i]++;
            f[i]++;
            n=n/i;
        }
        if(m[i]>0){oc[i]++;a[i].pb(m[i]);}
    }
    if (n>2)
    {
       m[n]++;f[n]++;
       if(m[n]>0){oc[n]++;a[n].pb(m[n]);}
    }
}
void kor(vc v,ll n)
{
    ml ::iterator it;
    ll ans=1;
    for(it=f.bg;it!=f.en;it++)
    {
        if(oc[itf]==n)
        {
            ll base=itf;
            sort(a[base].bg,a[base].en);
            ll power=a[base][1];
            ans=ans*pow(base,power);
        }
        else if(oc[itf]==n-1)
        {
            ll base=itf;
            sort(a[base].bg,a[base].en);
            ll power=a[base][0];
            ans=ans*pow(base,power);
        }
    }
    de ans;
}
main()
{
  ll n;ne n;ll bal=0;
  vc v;
  for(int i=0;i<n;i++){ll x;ne x;v.pb(x);}
  for(ll i=0;i<n;i++)
  {
      if(v[i]==1)
      {
          bal++;
      }
      else
          primeFactors(v[i]);
  }
  if(bal>1){de "1";r0}
  kor(v,n);
}
