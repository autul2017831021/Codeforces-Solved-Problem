/// hoise balda
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
#define inf 10000000000000000000
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
#define mod 998244353
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void onami(ll n,ll b,ll a)
{
    ml m;ml ::iterator it;
    while (n%2==0)
    {
        m[2]++;
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            m[i]++;
            n=n/i;
        }
    }
    if (n>2)
    {
       m[n]++;
    }
    ll xx,y;
    xx=1;y=1;
    for(it=m.begin();it!=m.end();it++){
        ll nnn=a;
        while(nnn%b==0){
            nnn=nnn/itf;
        }
        xx=max(nnn,xx);
    }
    n=b;
    vc v;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i){
                v.pb(i);
            }
            else {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    sort(v.rbg,v.ren);
    y=v[1];
    cout<<max(xx,y);
}
int main()
{
    int Tt;ne Tt;
    for(int i=0;i<Tt;i++)
    {
        ll a,b,c;
        ne a;ne b;
        if(b<=a && a%b==0){
            onami(b,b,a);nl;
        }
        else{
            de a;nl;
        }
    }
}
