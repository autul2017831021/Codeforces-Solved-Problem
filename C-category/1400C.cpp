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
#define mod 1000000009
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
int main()
{
    int tt;ne tt;
    int d=1;
    while(tt--)
    {
        int n,x;
        bool f=1;
        string s;
        cin>>s>>x;
        n=s.sz;int a[n+10];memset(a,-1,sizeof(a));
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'){
                if(i-x>=0)a[i-x]=0;
                if(i+x<n)a[i+x]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
                int aa=0;
                if(i-x<0 && i+x>=n){f=0;break;}
                else if(i-x>=0 && i+x<n){
                    if(a[i-x]==0 && a[i+x]==0){aa++;}
                }
                else if(i-x<0){
                    if(a[i+x]==0){aa++;}
                }
                else if(i+x>=n)
                {
                    if(a[i-x]==0)aa++;
                }
                if(aa>0){f=0;break;}
            }
        }
        if(!f){mone;continue;}
        for(int i=0;i<n;i++)
        {
            de abs(a[i]);
        }nl;
    }
}

