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
void kor(string s)
{
    string t;
    ll l=s.sz/2;
    char c;
    int a[30]={0};
    int b[30]={0};
    for(int i=0;i<s.sz;i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        b[i]=a[i]%2;
        a[i]=a[i]/2;
    }
    for(int i=0;i<26 && l>0;i++){
        l=l-a[i];
    }
    for(int i=0;i<26;i++){
        if(b[i]>0 && l>0){
            l--;a[i]++;b[i]--;
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<a[i];j++){t.pb(i+'a');}
    }
    for(int i=0;i<26;i++){
        if(b[i]>0){c=i+'a';break;}
    }
    de t;if(s.sz%2)de c;
    reverse(t.bg,t.en);
    de t;
}
int main()
{
    string s,t;ne s;
    kor(s);
}
