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
//#define modd 1000000007
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
int main()
{
    int t,d=1;scanf("%d",&t);
    while(t--)
    {
        ll n,yonko=0;ne n;
        vc v(n);
        for(int i=0;i<n;i++){ne v[i];}
        int f=1;
        int koto=0;
        for(int i=0;i<n;i++){
            if(f){
                if(koto==0){
                    if(v[i]==1){yonko++;}
                    int j=i+1,k=0,c=0;
                    for(j=i+1;j<n;j++){if(v[j]==0)k++;c++;if(c==2)break;}
                    if(k==2){
                        i++;
                        koto=0;
                    }
                    else{
                        koto++;
                    }
                }
                else if(koto>0){
                    if(v[i]==1){f=0;koto=1;}
                    else{koto++;}
                }
                if(koto==2){f=0;koto=0;}
            }
            else{
                if(koto==0){
                    koto++;
                }
                else if(koto>0){
                    if(v[i]==0){f=1;koto=0;i=i-1;}
                    else{koto++;}
                }
                if(koto==2){f=1;koto=0;}
            }
        }
        de yonko;nl;
    }
}

