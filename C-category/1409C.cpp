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
void printDivisors(long long n,ll a,ll b)
{
    vector<long long>v;
    ll nn=n;
    vc x;
    ll d=b-a;
    for(long long i=1;i<=sqrt(d);i++)
    {
        if(d%i==0)
        {
            if(d/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(d/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(long long i=0;i<v.size();i++)
    {
        d=v[i];
        n=nn;
        ll c=0;
        ll chuto=a,sal=a;
        ll boro=b;
        x.pb(a);c++;
        while(1)
        {
            if(c==n || sal==b)break;
            sal+=d;
            x.pb(sal);
            c++;
        }
        ll bal=*max_element(x.bg,x.en);
        if(bal!=b){x.clear();}
        else{
            n=n-x.sz;
            while(n)
            {
                if(chuto-d>0){
                    n--;
                    x.pb(chuto-d);chuto-=d;
                }
                else break;
            }
            n=nn;
            n=n-x.sz;
            while(n){
                n--;
                x.pb(boro+d);
                boro+=d;
            }
            break;
        }
    }
    for(int i=0;i<x.sz;i++){
        de x[i];sp;
    }nl;

}
int main()
{

   int t,d=1;ne t;
   while(t--)
   {
        ll n,a,b;cin>>n>>a>>b;
        printDivisors(n,a,b);
   }
}

