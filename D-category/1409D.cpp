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
#define inf 1000000000000000000
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
ll bigmod(ll x, ll y,ll modd)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%modd;
        y=y>>1;
        x= (x*x)%modd;
    }
    return res;
}
int Pow(ll x, ll y)
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
ll n,a;
void kor()
{
    ll ans=0,sum=0;
    vc v;
    string s;
    ll nn=n;
    while(nn)
    {
        sum=sum+nn%10;
        v.pb(nn%10);
        nn=nn/10;
    }
    sum=sum-a;
    if(sum<=0){de ans;nl;return;}
    v.pb(0);
    for(int i=0;i<v.sz;i++){
        if(v[i]==0)continue;
        bool f=0;
        ll pp=v[i];
        while(1)
        {
            v[i]++;
            if(v[i]>=10 || v[i]==0)break;
            ll onami=0;
            for(int k=0;k<v.sz;k++){
                onami+=v[k];
            }
            if(onami==a){f=1;break;}
        }
        if(f)break;
        v[i]=pp;
        ll bal=10-v[i];
        v[i]=v[i]+bal;
        if(v[i]==10)v[i]=0;
        for(int j=i+1;j<v.sz;j++){
            if(v[j]<9){v[j]++;break;}
            v[j]=0;
        }
        ll onami=0;
        for(int k=0;k<v.sz;k++){
            onami+=v[k];
        }
        if(onami<=a)break;
    }
    reverse(v.bg,v.en);
    for(int i=0;i<v.sz;i++){
        s.pb(v[i]+'0');
    }
    nn=ston(s);ans=nn-n;
    de ans;nl;
}
int main()
{

   int t,d=1;ne t;
   while(t--)
   {
        cin>>n>>a;
        kor();
   }
}

