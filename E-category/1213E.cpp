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
#define yes printf("YES\n");
#define no printf("NO\n");
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
    ll n;string s,t;ne n;ne s;ne t;
    string a[]={"abc","acb","bac","bca","cab","cba"};
    int m[3]={0};
    for(int i=0;i<2;i++)
        m[s[i]-'a']++;
    for(int i=0;i<2;i++)
        m[t[i]-'a']++;
    for(int i=0;i<6;i++)
    {
        string x=a[i];
        if(n==1)
        {
            if(x.find(s)==string::npos && x.find(t)==string::npos)
            {
                de "YES";nl;
                de x;r0
            }
        }
        else if(s[0]!=s[1] && t[0]!=t[1])
        {
            if(x.find(s)==string::npos && x.find(t)==string::npos)
            {
                de "YES";nl;
                for(int i=0;i<n;i++)
                    de x[0];
                for(int i=0;i<n;i++)
                    de x[1];
                for(int i=0;i<n;i++)
                    de x[2];
                r0
            }
        }
        else{
            string y="";
            y+=x[2];y+=x[0];
            if(x.find(s)==string::npos && x.find(t)==string::npos && s!=y && t!=y)
            {
                de "YES";nl;
                for(int i=0;i<n;i++)
                    de x;
                r0
            }
        }
    }

}
