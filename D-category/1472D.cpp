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
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define r0 return 0;
#define F first
#define S second
#define its (*it).S
#define itf (*it).F
#define inf 1000000000000000000
#define ninf -1000000000
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/* priority_queue<ll,vector<ll>,greater<ll> > */
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
void A()
{
    
}
void B()
{

}
void C()
{
    
}
void D()
{
    ll n;ne n;
    priority_queue<ll>a,b;
    for(int i=0;i<n;i++){
        ll c;ne c;
        if(c%2){
            b.push(c);
        }
        else a.push(c);
    }
    ll alice=0,bob=0;
    int i=0;
    while(max(a.sz,b.sz)>0){
        if(i%2==0 && a.sz>0){
            if(b.sz>0 && b.top()>a.top()){
                b.pop();
            }
            else{
                alice+=a.top();a.pop();
            }
        }
        else if(i%2==0){
            b.pop();
        }
        else if(i%2==1 && b.sz>0){
            if(a.sz>0 && a.top()>b.top()){
                a.pop();
            }
            else{
                bob+=b.top();b.pop();
            }
        }
        else if(i%2){
            a.pop();
        }
        i++;
    }
    //de alice;sp;de bob;nl;
    if(alice>bob){
        de "Alice";nl;
    }
    else if(alice==bob){
        de "Tie";nl;
    }
    else{
        de "Bob";nl;
    }
}
int main()
{
    int t;ne t;
    while(t--){
        D();
    }
}
