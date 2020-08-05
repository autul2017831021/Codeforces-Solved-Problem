/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<char,int>a,pair<char,int>b)
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
ll a[300003],b[300003];
int main()
{
    ll n,m,ans=0;
    ne n;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ne m;
    for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }
    ll i=0,j=0;
    while(i<n && j<m && ans>=0)
    {
        if(a[i]==b[j]){
            i++;j++;ans++;
        }
        else if(a[i]>b[j])
        {
            ll choto=b[j],x=0;
            for(int k=j+1;k<m;k++){
                if(choto+b[k]<a[i]){
                    choto+=b[k];
                }
                else if(choto+b[k]==a[i]){j=k;b[j]=a[i];x++;break;}
                else{
                    j=k;b[k]=choto+b[k];x++;break;
                }
            }
            if(!x){ans=-1;}
        }
        else
        {
            ll choto=a[i],x=0;
            for(int k=i+1;k<n;k++){
                if(choto+a[k]<b[j]){
                    choto+=a[k];
                }
                else if(choto+a[k]==b[j]){i=k;a[i]=b[j];x++;break;}
                else{
                    i=k;a[k]=choto+a[k];x++;break;
                }
            }
            if(!x){ans=-1;}
        }
    }
    if(i<n || j<m)ans=-1;
    de ans;nl;
}
