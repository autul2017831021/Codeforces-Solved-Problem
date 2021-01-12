#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define modd 998244353
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.F<b.F || (a.F==b.F && a.S>b.S))return true;
    return false;
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
ll bigmod(ll x, ll y,ll mod)
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
const int A=3e5+10;
vc v[A];
ll a[A];
int main()
{
    int t;ne t;
    while(t--)
    {
        ll n;ne n;
        memset(a,-1,sizeof a);
        set<ll>s;set<ll>::iterator j;
        ll boro=n,k=1;
        for(int i=1;i<=n;i++){
            ll c;ne c;v[c].pb(i);s.insert(c);
        }
        if(s.sz==1){
            for(int i=1;i<=n;i++){
                de *s.bg;sp;
            }nl;
            for(j=s.bg;j!=s.en;j++){
                v[*j].clear();
            }
            continue;
        }
        a[n]=*s.bg;
        for(j=s.bg;j!=s.en;j++){
            ll x=*j;ll choto=0;
            if(v[x].sz==1){
                choto=max(v[x][0],n-v[x][0]+1LL);
                if(choto>boro)continue;
                for(int i=choto;i<=boro;i++){
                    a[i]=*j;k++;
                }
                boro=choto-1;
                if(k==n)break;
                continue;
            }
            for(int i=0;i<v[x].sz;i++){
                if(i==0){
                    ll shona=v[x][i];
                    choto=shona;
                }
                else{
                    ll shona=v[x][i]-v[x][i-1];
                    choto=max(choto,shona);
                }
                if(i==v[x].sz-1){
                    ll shona=n-v[x][i]+1;
                    choto=max(choto,shona);
                }
            }
            if(choto>boro)continue;
            for(int i=choto;i<=boro;i++){
                a[i]=*j;k++;
            }
            boro=choto-1;
            if(k==n)break;
        }
        for(int i=1;i<=n;i++){
            de a[i];sp;
        }nl;
        for(j=s.bg;j!=s.en;j++){
            v[*j].clear();
        }
    }
}
