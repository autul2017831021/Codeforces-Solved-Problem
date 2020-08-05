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
stack<ll>sk;
queue<ll>q;
void kor(ll n,ll k,ll d)
{
    sk.push(1);ll kk=k;ll dd=d;
    ll ma=max((ll)0,(n-1));
    ll di=d/ma;ll m=d%ma;if(m==0 && di<k){di--;}
    d=d-di*(n-1);k=k-di;
    //de di;sp;de d;sp;de k;nl;
    if(d<k)
    {
        for(int i=0;;i++)
        {
            ll dudu=d+i*(n-1);
            if(dudu>=k+i)
            {
                k=k+i;
                d=dudu;
                di=di-i;
                break;
            }
        }
    }
    //de di;sp;de d;sp;de k;nl;
    for(int i=0;i<di;i++){
        if(i%2){sk.push(1);q.push(1);}
        else{sk.push(n);q.push(n);}
    }
    ll in;ll ij=sk.top();
    for(int i=0;i<k-1;i++)
    {
        in=sk.top();//de in;nl;
        if(ij==n)
        {
            d--;
            if(in==n){
              sk.push(n-1);q.push(n-1);
            }
            else{
               sk.push(n);q.push(n);
            }
        }
        else
        {
           d--;
           if(in==1){
              sk.push(2);q.push(2);
            }
            else{
               sk.push(1);q.push(1);
            }
        }
    }
    if(k!=0){
        in=sk.top();
        if(in+d>n){q.push(in-d);}
        else{q.push(in+d);}
    }
}
main()
{
    ll n,k,d;ne n;ne k;ne d;
    if(((n-1)*k<d) || k>d){no;r0}
    kor(n,k,d);
    yes;
    while(!q.empty()){
        ll x;x=q.front();q.pop();de x;sp;
    }
}
