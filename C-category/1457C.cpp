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
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<int,int>a,pair<int,int>b)
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
    return (a*b)/__gcd(a,b);
}
void AA()
{

}
void BB()
{

}
void CC()
{
    ll n,x,y,k,p;
    string s;
    cin>>n>>p>>k>>s>>x>>y;
    ll baad=n-p;
    ll pp=p-1;
    ll a[n+100][10];
    memset(a,0,sizeof a);
    bool f[n+100]={0};
    vc aa;
    for(int i=n-1;i>=0;i--){
        if(i-pp<0){
            break;
        }
        aa.pb(i);
    }
    reverse(aa.bg,aa.en);
    vc v;
    ll bal=0;
    for(int ii=0;ii<aa.sz;ii++){
        int i=aa[ii];
        ll ans=(i-pp)*y;
        int kk=0,j=i;
        if(f[i]){
            bal=a[i-k][0]-(i-k-pp)*y;
            if(s[i-k]=='0')bal=bal-x;
            bal=bal+ans;
            v.pb(bal);
            a[i][0]=bal;
            //de i;sp;de a[i][0];nl;
            continue;
        }
        while(j<n){
            if(s[j]=='0'){
                ans=ans+x;
            }
            f[j]=1;
            j=j+k;
        }
        a[i][0]=ans;
        v.pb(ans);
    }
    de *min_element(v.bg,v.en);nl;
}
void D()
{

}
int main()
{
    int test;ne test;
    while(test--)
    {
        //AA();
        //BB();
        CC();
        //D();
    }
}
