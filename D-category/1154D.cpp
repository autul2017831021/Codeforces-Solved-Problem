/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
main()
{
    bool f=1;
    ll n,b,c=0,a;
    ne n;ne b;ne a;
    vc v;
    ll l=a,h,in=0;
    for(int i=1;i<=n;i++){
        ll x;ne x;
        if(x==1)
        {
            v.pb(i-in);
            in=i;
        }
    }
    if(in==0 || (a+b)>=n)
    {
        de min(n,a+b);r0
    }
    for(int i=0;i<v.sz;i++)
    {
        ll x=v[i];
        if(x>a+b || b==0){
         c+=min((n-c),(a+b));de c;r0
        }
        else
        {
            ll bal=min(x-1,a);
            a=a-bal;
            ll sal=min(x-1-bal,b);
            b=b-sal;
            if(a==l)
            {
                a--;
                c=c+bal+sal+1;
            }
            else if(b>0)
            {
                b--;
                if(a+1>l){a=l;}
                else{a++;}
                c=c+bal+sal+1;
            }
            else
            {
                c=c+bal+sal;
                f=0;
            }
            //de "a->";sp;de a;nl;de "b->";sp;de b;nl;
            //de "ans = ";de c;nl;
        }
    }
    h=n-in;
    //de min(h,a+b);nl;
    c=c+min(h,min(a+b,n-c));
    de c;nl;
}
