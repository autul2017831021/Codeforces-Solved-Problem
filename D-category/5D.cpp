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
#define pi acos(-1.0)
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
void kor()
{


}
main()
{
    dl a,v;ne a;ne v;
    dl l,d,w;ne l;ne d;ne w;dl t=0;bool f=1;
    if(w>=v)
    {
        dl s=(v*v)/(2*a);
        if(s>l)
        {
            t=(2*l)/a;t=sqrt(t);
        }
        else{
            dl ll=(v*v)/(2*a);
            t+=(v/a);
            l=l-ll;
            t=t+(l/v);
        }
    }
    else
    {
       dl s=(w*w)/(2*a);
       if(s>=d)
       {
           //de "one";nl;
           t=t+sqrt((2*d)/a);
           w=sqrt(2*a*d);
           l=l-d;
           dl x=sqrt(w*w+2*a*l);
           if(x>v)
           {
                dl ll=(v*v-w*w)/(2*a);
                t+=((v-w)/a);
                l=l-ll;
                t=t+(l/v);
           }
           else
           {
               t=t+(x-w)/a;
           }
       }
       else
       {
           //de "two";nl;
           dl mv=sqrt((w*w)/2+a*d);
           if(mv>v)
           {
                dl s1=(v*v)/(2*a);
                dl s2=(v*v-w*w)/(2*a);
                t=v/a+(d-s1-s2)/v+(v-w)/a;
           }
           else
           {
               t=(mv/a)+(mv-w)/a;
           }
            s=(v*v-w*w)/(2*a);
            if(s>l-d){
                t=t+((sqrt(w*w+2*a*(l-d)))-w)/a;
            }
            else{
                t=t+(v-w)/a+(l-d-s)/v;
            }
       }

    }
    printf("%.10f",t);
}
