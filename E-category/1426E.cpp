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
ll n,a,b,c,x,y,z,bal,sal,yonko;
ll kor(ll A,ll B,ll C,ll X,ll Y,ll Z)
{
    bal=min(A,X);A-=bal;X-=bal;
    if(A==0){
        if(C==min(C,Z)){
            Z-=C;C=0;
            bal=min(X,B);B-=bal;X-=bal;
            bal=min(Y,B);Y-=bal;B-=bal;
        }
        else{
            C-=Z;Z=0;
            bal=min(C,Y);C-=bal;Y-=bal;
        }
    }
    else{
        if(Z==min(Z,A)){
            A-=Z;Z=0;
            bal=min(Y,C);C-=bal;Y-=bal;
            bal=min(B,Y);B-=bal;Y-=bal;
        }
        else{
            Z-=A;A=0;
            bal=min(C,Z);C-=bal;Z-=bal;
            bal=min(B,Y);B-=bal;Y-=bal;
        }
    }
    sal=min(A,Y);
    sal=sal+min(B,Z);
    sal=sal+min(C,X);
    return sal;
}
int main()
{
    cin>>n>>a>>b>>c>>x>>y>>z;
    yonko=min(a,y);yonko+=min(b,z);yonko+=min(c,x);
    ll onami=inf;
    onami=min(onami,kor(a,b,c,x,y,z));
    onami=min(onami,kor(b,c,a,y,z,x));
    onami=min(onami,kor(c,a,b,z,x,y));
    de onami;sp;de yonko;nl;
}
