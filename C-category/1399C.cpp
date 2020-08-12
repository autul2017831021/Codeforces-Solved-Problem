/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
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
#define inf 10000000000
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,ans=0;cin>>n;
        ml m,p;ml ::iterator it;
        for(int i=0;i<n;i++){
            ll x;ne x;
            m[x]++;
        }
        vp v;
        for(it=m.bg;it!=m.en;it++)
        {
            v.pb({itf,its});
            ans=max(ans,its/2);
        }
        n=v.sz;
        for(int i=0;i<n-1;i++){
            int l=i,r=n-1;
            while(r>l){
                ll lagbe = v[l].F+v[r].F;
                ll hoise=min(v[l].S,v[r].S);
                bool f[55]={0};
                for(int j=l+1;j<r-1;j++){
                    for(int k=j+1;k<r;k++){
                        if(v[j].F+v[k].F>lagbe)break;
                        if(v[j].F+v[k].F==lagbe && f[j]==0 && f[k]==0){
                            f[j]=1;f[k]=1;
                            hoise+=min(v[j].S,v[k].S);break;
                        }
                    }
                }
                for(int j=r+1;j<n;j++){
                    if(2*v[j].F==lagbe){
                        hoise+=v[j].S;break;
                    }
                }
                ans=max(ans,hoise);
                r--;
            }

        }
        for(int i=0;i<n;i++)
        {
            ll lagbe=2*v[i].F;
            ll hoise=v[i].S/2;
            bool f[55]={0};
            f[i]=1;
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(v[j].F+v[k].F==lagbe && f[j]==0 && f[k]==0 && j!=k){
                            f[j]=1;f[k]=1;
                            hoise+=min(v[j].S,v[k].S);break;
                        }
                }
            }
            ans=max(ans,hoise);
        }
        de ans;nl;
    }
}

