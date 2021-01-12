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
    ll n,ans=0,j=0;
    string s,t;
    cin>>n>>s>>t;
    vc v[100010];
    for(int i=0;i<(n+1)/2;i++){
        if(i==(n-i-1)){
            if(s[i]!=t[i])ans++;
            continue;
        }
        v[j].pb(s[i]-'a');v[j].pb(s[n-i-1]-'a');
        v[j].pb(t[i]-'a');v[j].pb(t[n-i-1]-'a');
        j++;
    }
    for(int i=0;i<j;i++)
    {
        set<int>a;
        ml m;ml ::iterator it;
        for(int ii=0;ii<v[i].sz;ii++){
            a.insert(v[i][ii]);
            m[v[i][ii]]++;
        }
        if(a.sz==3){
            if(v[i][0]==v[i][1])ans+=2;
            else ans++;
        }
        if(a.sz==4)ans+=2;
        if(a.sz==2){
            for(it=m.bg;it!=m.en;it++){
                if(its==3)ans++;
            }
        }
    }
    de ans;
}

