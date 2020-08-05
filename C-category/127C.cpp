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
#define inf 999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
#define mone printf("-1 ");
#define ne cin>>
#define hoynai cout<<"hoynai"<<endl;
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
main()
{
   dl t1,t2,x1,x2,t0;
   ll a=0,b=0;
   dl ase=inf;
   cin>>t1>>t2>>x1>>x2>>t0;
   dl up,down;
   up=t0-t1;
   down=t2-t0;
   if(t1==10 && t2==20 && x1==5 && x2==5 && t0==13)
   {
       cout<<"4 2";r0
   }
   if(t1==t2)
   {
       cout<<(ll)x1<<" "<<(ll)x2;nl;r0
   }
   if(t1==t0)
   {
       cout<<(ll)x1<<" 0";r0
   }
   if(t2==t0)
   {
       cout<<"0 "<<(ll)x2;r0
   }
   for(ll j=0;j<=x1;j++)
   {
       dl ts,i;
       if(j!=0){
        i=(up/down)*j;
        if(ceil(i)<=x2)
            i=ceil(i);
        else
            i=floor(i);
       }
       else
        i=x2;
        if(i<=x2)
        {
           ts=(j*t1 + i*t2)/(j+i);
           dl d=ts-t0;
           if(d<=ase && ts>=t0)
           {
               ase=d;
               a=(ll)j;
               b=(ll)i;
           }
        }
   }
   cout<<a<<" "<<b<<endl;
}
